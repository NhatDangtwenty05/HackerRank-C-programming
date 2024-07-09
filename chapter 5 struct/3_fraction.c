#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

struct fraction
{
	int num;
	int de;
};

typedef struct fraction fraction;

int GCD(int a, int b)
{
	if(b == 0)
		return a;
	else
		return GCD(b, a%b);
}

fraction root(fraction a)
{
	fraction res;
	int gcd = GCD(a.num, a.de);
	res.num = a.num / gcd;
	res.de = a.de /gcd;
	return res;
}

fraction sumf(fraction a, fraction b)
{
	fraction res;
	res.num = a.num*b.de + b.num*a.de;
	res.de = a.de*b.de;
	return res;
}

fraction subtracf(fraction a, fraction b)
{
	fraction res;
	res.num = a.num*b.de - b.num*a.de;
	res.de = a.de*b.de;
	return res;
}	

int main()
{
	fraction input[2];
	for(int i = 0;i < 2;i++)
	{
		scanf("%d", &input[i].num);
		scanf("%d", &input[i].de);
	}
	fraction sum = sumf(input[0], input[1]);
	fraction subtrac = subtracf(input[0], input[1]);
	sum = root(sum);
	subtrac= root(subtrac);
	printf("%d / %d\n", sum.num, sum.de);
	printf("%d / %d", subtrac.num, subtrac.de);

	return 0;
}