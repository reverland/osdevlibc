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

#ifndef _STDC_WCHAR_H_
#define _STDC_WCHAR_H_

#include <stddef.h>
#include <stdarg.h>

#ifdef __cplusplus
extern "C" {
#endif
	
struct tm;
	

int					swprintf		(wchar_t* s, size_t n, const wchar_t* format, ...);
int					swscanf		(const wchar_t* s, const wchar_t* format, ...);
int					vswprintf		(wchar_t* s, size_t n, const wchar_t* format, va_list arg);
int					vswscanf		(const wchar_t* s, const wchar_t* format, va_list arg);
double				wcstod		(const wchar_t* nptr, wchar_t** endptr);
float					wcstof		(const wchar_t* nptr, wchar_t** endptr);
long double			wcstold		(const wchar_t* nptr, wchar_t** endptr);
long int				wcstol		(const wchar_t* nptr, wchar_t** endptr, int base);
long long int			wcstoll		(const wchar_t* nptr, wchar_t** endptr, int base);
unsigned long int		wcstoul		(const wchar_t* nptr, wchar_t** endptr, int base);
unsigned long long int	wcstoull		(const wchar_t* nptr, wchar_t** endptr, int base);
wchar_t*				wcscpy		(wchar_t* s1, const wchar_t* s2);
wchar_t*				wcsnpcpy		(wchar_t* s1, const wchar_t* s2, size_t n);
wchar_t*				wmemcpy		(wchar_t* s1, const wchar_t* s2, size_t n);
wchar_t*				wmemmove		(wchar_t* s1, const wchar_t* s2, size_t n);
wchar_t*				wcscat		(wchar_t* s1, const wchar_t* s2);
wchar_t*				wcsncat		(wchar_t* s1, const wchar_t* s2, size_t n);
int					wcscmp		(const wchar_t* s1, const wchar_t* s2);
int					wcsncmp		(const wchar_t* s1, const wchar_t* s2, size_t n);
int					wmemcmp		(const wchar_t* s1, const wchar_t* s2, size_t n);
wchar_t*				wcschr		(const wchar_t* s, wchar_t c);
size_t				wcscspn		(const wchar_t* s1, const wchar_t* s2);
wchar_t*				wcspbrk		(const wchar_t* s1, const wchar_t* s2);
wchar_t*				wcsrchr		(const wchar_t* s, wchar_t c);
size_t				wcsspn		(const wchar_t* s1, const wchar_t* s2);
wchar_t*				wcsstr		(const wchar_t* s1, const wchar_t* s2);
wchar_t* 				wcstok		(wchar_t* s1, const wchar_t* s2, wchar_t** ptr);
wchar_t*				wmemchr		(const wchar_t* s, wchar_t c, size_t n);
size_t				wcslen		(const wchar_t* s);
wchar_t*				wmemset		(wchar_t* s, wchar_t c, size_t n);
size_t				wcsftime		(wchar_t* s, size_t maxsize, const wchar_t* format, const struct tm* timeptr);

// TODO: conversion functions

#ifdef __cplusplus
}
#endif

#endif
