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

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <machine/_target.h>

void _assert(const char* file, int line, const char* function) {
	char buffer[strlen(file) + strlen(function) + 40];
	sprintf(buffer, "Assertion failed at %s:%i (%s)", file, line, function);
#ifdef _TARGET_X86_
	while(1)
		asm("hlt");
#else
	while(1);
#endif
}

