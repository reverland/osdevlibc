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

#ifndef _STDC_CTYPE_H_
#define _STDC_CTYPE_H_

#ifdef __cplusplus
extern "C" {
#endif
	
static int islower		(int c) 	{ return c >= 'a' && c <= 'z'; }
static int isupper		(int c) 	{ return c >= 'A' && c <= 'Z'; }
static int isspace	(int c) 	{ return c == ' ' || c == '\t' || c == '\r' || c == '\n'; }
static int isalpha		(int c) 	{ return islower(c) || isupper(c); }
static int iscntrl		(int c) 	{ return c >= 0x0 && c <= 0x8; }
static int isdigit		(int c) 	{ return c >= '0' && c <= '9'; }
static int isalnum	(int c) 	{ return isalpha(c) || isdigit(c); }
static int ispunct	(int c) 	{ return (c >= 0x21 && c <= 0x2F) || (c >= 0x3A && c <= 0x40) || (c >= 0x5B && c <= 0x60) || (c >= 0x7B && c <= 0x7E); }
static int isgraph		(int c) 	{ return ispunct(c) || isalnum(c); }
static int isprint		(int c) 	{ return isgraph(c) || isspace(c); }
static int isxdigit		(int c) 	{ return isdigit(c) || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'); }

static int tolower	(int c)	{ if (isupper(c)) 	return c + 'a' - 'A'; else return c; }
static int toupper	(int c) 	{ if (islower(c)) 	return c - 'a' + 'A'; else return c; }

#ifdef __cplusplus
}
#endif

#endif
