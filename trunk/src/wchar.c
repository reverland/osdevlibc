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

#include <wchar.h>
#include <string.h>

size_t wcslen(const wchar_t* str) {
	size_t result = 0;
	while (*(str++)) result++;
	return result;
}

wchar_t* wcscat(wchar_t *ws1, const wchar_t *ws2) {
	wcscpy(ws1 + wcslen(ws1), ws2);
	return ws1;
}

wchar_t* wcscpy(wchar_t *dest, const wchar_t *src) {
	memcpy(dest, src, (wcslen(src) + 1) * sizeof(wchar_t));		// IMPORTANT TODO: this is just a temporary shit
	return dest;
}
