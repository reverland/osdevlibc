/*

   Copyright 2009 Pierre KRIEGER

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
   
*/

#include <errno.h>
#include <stdlib.h>
#include <machine/_target.h>

/*	How does it work ?

The _get_errno function gives the location of errno
depending on the current stack location

The goal is to make errno as reentrant as possible
(though it's not yet guaranteed)

The _get_errno function determines the current stack, then
tries to find a similar value in the _errno_entries table.
If it doesn't find an entry, it will create one
*/

#define	_ERRNO_ENTRIES_COUNT	16

struct _errno_entry {
	void*	stack;
	int		value;
} _errno_entries[_ERRNO_ENTRIES_COUNT] = { 0 };
int _errno_entries_oldest = 0;


int* _get_errno() {
	// first we determine the current stack
	void* currentStack = 0;
#if	defined(_TARGET_X86_)
	asm("mov %%esp, %0" : "=r"(currentStack));
#elif	defined(_TARGET_ARM_)
	asm("mov %0, %%sp" : "=r"(currentStack));
#else
#warning Unable to determine a stack value, errno wont be reentrant
#endif
	
	// now we search the table for a similar stack
	int i;
	for (i = 0; i < _ERRNO_ENTRIES_COUNT; i++) {
		// two stacks are similar <=> diff less than 0x500
		if (abs(currentStack - _errno_entries[i].stack) < 0x500)
			return &_errno_entries[i].value;
	}
	
	// there was no table entry, so we create one
	int* returnValue = &_errno_entries[_errno_entries_oldest].value;
	_errno_entries[_errno_entries_oldest].stack = currentStack;
	_errno_entries[_errno_entries_oldest].value = 0;
	_errno_entries_oldest++;
	_errno_entries_oldest %= _ERRNO_ENTRIES_COUNT;
	return returnValue;
}
