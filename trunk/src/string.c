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

#include <string.h>
#include <machine/_target.h>

void* memcpy(void* destination, const void* source, size_t num) {
#ifdef _TARGET_X86_
	asm("cld; rep movsb" :: "S"(source), "D"(destination), "c"((long)num) : "flags", "memory");
#else
	const unsigned char* vsource = (const unsigned char*)source;
	unsigned char* vdestination = (unsigned char*)destination;
	while (num >= 1) {
		*vdestination = *vsource;
		vsource++; vdestination++; num--;
	}
#endif
	return destination;
}

void* memmove(void* destination, const void* source, size_t num) {
#ifdef _TARGET_X86_
	if (destination < source)
		asm("cld; rep movsb" :: "S"(source), "D"(destination), "c"((long)num) : "flags", "memory");
	else
		asm("std; rep movsb" :: "S"((unsigned char*)source + num - 1), "D"((unsigned char*)destination + num - 1), "c"((long)num) : "flags", "memory");
#else
	const unsigned char* sp;
	unsigned char* dp;
	if (destination < source) {
		sp = (const unsigned char*)source; dp = (unsigned char*)destination;
		while (num) { *dp = *sp; dp++; sp++; num--; }
	} else {
		while (num) {
			sp = (unsigned char*)source + num - 1;
			dp = (unsigned char*)destination + num - 1;
			*dp = *sp;
			num--;
		}
	}
#endif
	return destination;
}

char* strcpy(char* destination, const char* source) {
	return memcpy(destination, source, strlen(source) + 1);
}

char* strncpy(char* destination, const char* source, size_t n) {
	size_t len = strlen(source) + 1;
	if (len > n) len = n;
	memcpy(destination, source, len);
	if (len < n) memset(destination + len, '\0', n - len);
	return destination;
}

char* strcat(char* s1, const char* s2) {
	strcpy(s1 + strlen(s1), s2);
	return s1;
}

char* strncat(char* s1, const char* s2, size_t n) {
	size_t n2 = strlen(s2);
	if (n2 > n) n2 = n;
	strncpy(s1 + strlen(s1), s2, n2);
	s1[strlen(s1) + n2] = '\0';
	return s1;
}

int memcmp(const void* ptr1, const void* ptr2, size_t num) {
	const unsigned char* vptr1 = (const unsigned char*)ptr1;
	const unsigned char* vptr2 = (const unsigned char*)ptr2;
	while (num) {
		if (*vptr1 > *vptr2) return 1;
		else if (*vptr1 < *vptr2) return -1;
		vptr1++; vptr2++; num--;
	}
	return 0;
}

int strcmp(const char* str1, const char* str2) {
	size_t len1 = strlen(str1);
	size_t len2 = strlen(str2);
	
	int cmpResult = memcmp(str1, str2, (len1 < len2) ? len1 : len2);
	if (cmpResult != 0)
		return cmpResult;
	
	if (len1 > len2)
		return 1;
	else if (len1 < len2)
		return -1;
	
	return 0;
}

int strncmp(const char* s1, const char* s2, size_t n) {
	return memcmp(s1, s2, n);
}

void* memchr(const void* ptr, int value, size_t num) {
	const unsigned char* vptr = (const unsigned char*)ptr;
	while (num) {
		if (*vptr == (unsigned char)value)
			return ((void*)vptr);
		vptr++; num--;
	}
	return NULL;
}

char* strchr(const char* s, int c) {
	return memchr(s, c, strlen(s) + 1);
}

size_t strcspn(const char* s1, const char* s2) {
	char* pbrk = strpbrk(s1, s2);
	if (pbrk == NULL)
		return strlen(s1);
	return (size_t)(pbrk - s1);
}

char* strpbrk(const char* s1, const char* s2) {
	int s2len = strlen(s2);
	for (; *s1 != '\0'; s1++) {
		int i;
		for (i = 0; i < s2len; i++)
			if (*s1 == s2[i])
				return (char*)s1;
	}
	return NULL;
}

char* strrchr(const char* str, int character) {
	int i = strlen(str);
	for (; i >= 0; i--)
		if (str[i] == character)
			return (char*)str + i;
	return NULL;
}

size_t strspn(const char* s1, const char* s2) {
	int found = 0;
	size_t len = 0;
	do {
		int i;
		for (i = 0; i < strlen(s2); i++) {
			if (s1[len] == s2[i]) {
				len++;
				found = 1;
				break;
			}
		}
	} while(found);
	return len;
}

char* strstr(const char* s1, const char* s2) {
	size_t s2len = strlen(s2);
	for (; *s1 != '\0'; s1++) {
		int i;
		for (i = 0; i < s2len; i++) {
			if (s2[i] == '\0')
				return (char*)s1;
			if (s2[i] == *s1)
				continue;
			break;
		}
	}
	return NULL;
}

char* strtok(char* s1, const char* s2) {
	static char* prevS1;
	if (s1 == NULL) {
		if (prevS1 == NULL)
			return NULL;
		s1 = prevS1;
	}
	
	s1 += strspn(s1, s2);
	if (*s1 == '\0')
		return NULL;
	size_t s1newLen = strcspn(s1, s2);
	
	if (s1[s1newLen] == '\0') {
		// we are at the end of the original string
		// next call should return NULL whatever s2 is
		prevS1 = NULL;
	} else {
		s1[s1newLen] = '\0';
		prevS1 = s1 + s1newLen + 1;
	}
	
	return s1;
}

void* memset(void* ptr, int value, size_t num) {
#ifdef _TARGET_X86_
	asm("cld; rep stosb" :: "a"(value), "D"(ptr), "c"((long)num) : "flags", "memory");
#else
	unsigned char* vptr = (unsigned char*)ptr;
	while (num) {
		*vptr = (unsigned char)value;
		vptr++; num--;
	}
#endif
	return ptr;
}

size_t strlen(const char* str) {
	size_t len = 0;
#ifdef _TARGET_X86_
	const char* endPtr;
	asm("cld; repnz scasb" : "=D"(endPtr) : "D"(str), "a"(0) : "flags");
	len = endPtr - str;
#else
	while (*str != '\0') { str++; len++; }
#endif
	return len;
}

