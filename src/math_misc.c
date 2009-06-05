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

#include <math.h>
#include <machine/_target.h>

double			erf(double x);
float				erff(float x);
long double		erfl(long double x);
double			erfc(double x);
float				erfcf(float x);
long double		erfcl(long double x);
double			lgamma(double x);
float				lgammaf(float x);
long double		lgammal(long double x);
double			tgamma(double x);
float				tgammaf(float x);
long double		tgammal(long double x);
double			ceil(double x);
float				ceilf(float x);
long double		ceill(long double x);
double			floor(double x);
float				floorf(float x);
long double		floorl(long double x);
double			nearbyint(double x);
float				nearbyintf(float x);
long double		nearbyintl(long double x);
double			rint(double x);
float				rintf(float x);
long double		rintl(long double x);
long int			lrint(double x);
long int			lrintf(float x);
long int			lrintl(long double x);
long long int		llrint(double x);
long long int		llrintf(float x);
long long int		llrintl(long double x);
double			round(double x);
float				roundf(float x);
long double		roundl(long double x);
long int			lround(double x);
long int			lroundf(float x);
long int			lroundl(long double x);
long long int		llround(double x);
long long int		llroundf(float x);
long long int		llroundl(long double x);
double			trunc(double x);
float				truncf(float x);
long double		truncl(long double x);
double			fmod(double x, double y);
float				fmodf(float x, float y);
long double		fmodl(long double x, long double y);
double			remainer(double x, double y);
float				remainerf(float x, float y);
long double		remainerl(long double x, long double y);
double			remquo(double x, double y, int* quo);
float				remquof(float x, float y, int* quo);
long double		remquol(long double x, long double y, int* quo);
double			copysign(double x, double y);
float				copysignf(float x, float y);
long double		copysignl(long double x, long double y);
double			nan(const char* tagp);
float				nanf(const char* tagp);
long double		nanl(const char* tagp);
double			nextafter(double x, double y);
float				nextafterf(float x, float y);
long double		nextafterl(long double x, long double y);
double			nexttoward(double x, long double y);
float				nexttowardf(float x, long double y);
long double		nexttowardl(long double x, long double y);
double			fdim(double x, double y);
float				fdimf(float x, float y);
long double		fdiml(long double x, long double y);
double			fmax(double x, double y);
float				fmaxf(float x, float y);
long double		fmaxl(long double x, long double y);
double			fmin(double x, double y);
float				fminf(float x, float y);
long double		fminl(long double x, long double y);
double			fma(double x, double y, double z);
float				fmaf(float x, float y, float z);
long double		fmal(long double x, long double y, long double z);

