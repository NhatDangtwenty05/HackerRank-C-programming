#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

struct complex
{
	int real;
	int imaginary;
};

typedef struct complex complex;

complex sumf(complex a, complex b)
{
	complex res;
	res.real = a.real + b.real;
	res.imaginary = a.imaginary + b.imaginary;

	return res;
}

complex subtracf(complex a, complex b)
{
	complex res;
	res.real = a.real - b.real;
	res.imaginary = a.imaginary - b.imaginary;

	return res;
}

complex multiplicatinf(complex a, complex b)
{
	complex res;
	res.real = a.real*b.real - a.imaginary*b.imaginary;
	res.imaginary = a.real*b.imaginary + a.imaginary*b.real;

	return res;
}

void print(complex x)
{
	printf("%d + %di\n", x.real, x.imaginary);
}

int main()
{
	complex num_1, num_2;
	scanf("%d", &num_1.real);
	scanf("%d", &num_1.imaginary);
	scanf("%d", &num_2.real);
	scanf("%d", &num_2.imaginary);

	complex sum = sumf(num_1, num_2);
	complex subtrac = subtracf(num_1, num_2);
	complex multiplicatin = multiplicatinf(num_1, num_2);
	print(sum);
	print(subtrac);
	print(multiplicatin);

	return 0;
}