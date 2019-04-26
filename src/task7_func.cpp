#include "project.h"
#include "func.h"
#include <cmath>
double x = 12, result;
void f(void) {
	result= (4 - pow(x, 2)) / 2;
	printf("x = %f\n", x);
	printf("f = %f\n", result);
}