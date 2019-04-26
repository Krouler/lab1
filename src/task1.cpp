#include "project.h"

#include <cmath>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
	double x=12, f;

	
	f = (4 - pow(x, 2)) / 2;

	printf("x = %f\n", x);
	printf("f = %f\n", f);

	cin >> x;

	f = (4 - pow(x, 2)) / 2;

	printf("x = %f\n", x);
	printf("f = %f\n", f);

	system("pause");
	
	
	
}
