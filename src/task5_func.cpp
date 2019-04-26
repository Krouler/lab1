#include "project.h"

#include <cmath>
using namespace std;

double f(double x) {
	double kek = (4 - pow(x, 2)) / 2;
	printf("x = %f\n", x);
	printf("f = %f\n", kek);

	return kek;
}
