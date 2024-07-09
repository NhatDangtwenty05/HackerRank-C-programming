#include <stdio.h>
#include <math.h>

int GCD(long long a, long long b)
{
	long long res;
	while(b != 0)
	{
		res = a%b;
		a = b;
		b = res;
	}

	return a;
}

long long LCM(long long a, long long b)
{
	return (a/GCD(a,b))*b;
}

int main()
{
	long long x, y, z, t;
	scanf("%lld %lld %lld %lld", &x, &y, &z, &t);

	long long temp = pow(10,t - 1);
	long long bc = LCM(x,LCM(y,z));
	long long resolt = (temp + bc - 1) / bc * bc;
	if(resolt < pow(10,t))
		printf("%lld", resolt);
	else
		printf("INVALID");

	return 0;
}