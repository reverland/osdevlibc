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

#ifndef _STDC_STDINT_H_
#define _STDC_STDINT_H_

// these types should be predefined by GCC but do not work ~_~
// see http://gcc.gnu.org/onlinedocs/cpp/Common-Predefined-Macros.html#Common-Predefined-Macros
/*typedef __INT8_TYPE__		int8_t;
typedef __INT16_TYPE__		int16_t;
typedef __INT32_TYPE__		int32_t;
typedef __INT64_TYPE__		int64_t;
typedef __UINT8_TYPE__		uint8_t;
typedef __UINT16_TYPE__		uint16_t;
typedef __UINT32_TYPE__		uint32_t;
typedef __UINT64_TYPE__		uint64_t;

typedef __INTPTR_TYPE__		intptr_t;
typedef __UINTPTR_TYPE__		uintptr_t;*/

typedef char					int8_t;
typedef short					int16_t;
typedef int					int32_t;
typedef long long int				int64_t;

typedef unsigned char			uint8_t;
typedef unsigned short			uint16_t;
typedef unsigned int				uint32_t;
typedef unsigned long long int		uint64_t;

typedef int32_t					intptr_t;
typedef uint32_t					uintptr_t;


#endif
