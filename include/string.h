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

#ifndef _STDC_STRING_H_
#define _STDC_STRING_H_

#include <stddef.h>

void*	memcpy	(void* s1, const void* s2, size_t n);
void*	memmove	(void* s1, const void* s2, size_t n);
char*	strcpy	(char* s1, const char* s2);
char*	strncpy	(char* s1, const char* s2, size_t n);
char*	strcat	(char* s1, const char* s2);
char*	strncat	(char* s1, const char* s2, size_t n);
int		memcmp	(const void* s1, const void* s2, size_t n)		__attribute__((pure));
int		strcmp	(const char* s1, const char* s2)				__attribute__((pure));
int		strncmp	(const char* s1, const char* s2, size_t n)		__attribute__((pure));
void*	memchr	(const void* s, int c, size_t n);
char*	strchr	(const char* s, int c);
size_t	strcspn	(const char* s1, const char* s2);
char*	strpbrk	(const char* s1, const char* s2);
char*	strrchr	(const char* s, int c);
size_t	strspn	(const char* s1, const char* s2);
char*	strstr		(const char* s1, const char* s2);
char*	strtok	(char* s1, const char* s2);
void*	memset	(void* s, int c, size_t n);
size_t	strlen		(const char* s)							__attribute__((pure));


// macros for optimization
//#define	strcpy(d, s) 				((char*)memcpy(d, s, strlen(s) + 1))
#define	strncmp(s1, s2, n)			((char*)memcmp(s1, s2, n))
//#define	strchr(s, c)					((char*)memchr(s, c, strlen(s) + 1))

#endif
