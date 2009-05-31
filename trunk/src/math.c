#include <math.h>
#include <machine/_target.h>

#ifdef _TARGET_X86_
double cos(double x) {
	asm("fcos" : "+t"(x));
	return x;
}

double sin(double x) {
	asm("fsin" : "+t"(x));
	return x;
}
#endif

