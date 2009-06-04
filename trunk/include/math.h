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

#ifndef _STDC_MATH_H_
#define _STDC_MATH_H_

#ifdef __cplusplus
extern "C" {
#endif

//TODO: 7.12.3 and less

double			acos(double x);
float				acosf(float x);
long double		acosl(long double x);
double			asin(double x);
float				asinf(float x);
long double		asinl(long double x);
double			atan(double x);
float				atanf(float x);
long double		atanl(long double x);
double			atan2(double y, double x);
float				atan2f(float y, float x);
long double		atan2l(long double y, long double x);
double			cos(double x);
float				cosf(float x);
long double		cosl(long double x);
double			sin(double x);
float				sinf(float x);
long double		sinl(long double x);
double			tan(double x);
float				tanf(float x);
long double		tanl(long double x);
double			acosh(double x);
float				acoshf(float x);
long double		acoshl(long double x);
double			asinh(double x);
float				asinhf(float x);
long double		asinhl(long double x);
double			atanh(double x);
float				atanhf(float x);
long double		atanhl(long double x);
double			cosh(double x);
float				coshf(float x);
long double		coshl(long double x);
double			sinh(double x);
float				sinhf(float x);
long double		sinhl(long double x);
double			tanh(double x);
float				tanhf(float x);
long double		tanhl(long double x);
double			exp(double x);
float				expf(float x);
long double		expl(long double x);
double			exp2(double x);
float				exp2f(float x);
long double		exp2l(long double x);
double			expm1(double x);
float				expm1f(float x);
long double		expm1l(long double x);
double			frexp(double x, int* exp);
float				frexpf(float x, int* exp);
long double		frexpl(long double x, int* exp);
int				ilogb(double x);
int				ilogbf(float x);
int				ilogbl(long double x);
double			ldexp(double x, int exp);
float				ldexpf(float x, int exp);
long double		ldexpl(long double x, int exp);
double			log(double x);
float				logf(float x);
long double		logl(long double x);
double			log10(double x);
float				log10f(float x);
long double		log10l(long double x);
double			log1p(double x);
float				log1pf(float x);
long double		log1pl(long double x);
double			log2(double x);
float				log2f(float x);
long double		log2l(long double x);
double			logb(double x);
float				logbf(float x);
long double		logbl(long double x);
double			modf(double value, double* iptr);
float				modff(float value, float* iptr);
long double		modfl(long double value, long double* iptr);

//TODO: 7.12.7+

#ifdef __cplusplus
}
#endif

#endif
