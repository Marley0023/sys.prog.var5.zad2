
#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#define f pow(y,x) + cbrt(fabs(x) + pow(fabs(y), exp(x)))
#define w sqrt(fabs(20*x)) / (pow(x, 2) + pow(y, 3))
int main()
{
	setlocale(0, "rus");
	const double x = -0.85;
	const double y = 1.25;
	printf("b = %f\t\n", f);
	printf("z = %f\t\n", w);
}

