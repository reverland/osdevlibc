#include <math.h>
#include <machine/_target.h>

#ifdef _TARGET_X86_
double cos(double x) {
	double result = x;
	asm("fldl (%0); fcos; fstpl (%0);" : : "r"(&result) : "memory");
	return result;
}

double sin(double x) {
	double result;
	asm("fldl (%0); fsin; fstpl (%0);" : : "r"(&result) : "memory");
	return result;
}
#endif

