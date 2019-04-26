#include "project.h"

#include <cmath>
using namespace std;

double x, result;

void f(void);

void main()
{
	setlocale(LC_ALL, "RUS");

	printf("¬ведите x:\n");
	cin >> x;

	f();
	printf("x = %f\n", x);
	printf("f = %f\n", result);
	

	system("pause");



}

void f(void)
{
	result = (4 - pow(x, 2)) / 2;
}
