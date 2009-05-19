#include <math.h>
#include <machine/_target.h>

#ifdef _TARGET_X86_
double cos(double x) {
	double result = x;
	asm("fcos" : "=t"(result) : "0"(x));
	return result;
}

double sin(double x) {
	double result;
	asm("fsin" : "=t"(result) : "0"(x));
	return result;
}
#endif

