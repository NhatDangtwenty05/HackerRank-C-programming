#include <stdio.h>
#include <math.h>

int prime(long long n)
{
	if(n < 2)
		return 0;
	for(int i = 2;i <= sqrt(n);i++)
	{
		if(n%2 == 0)
			return 0;
	}

	return 1;
}

int palindrome(long long n)
{
	long long temp = n;
	long long res = 0;
	while(n!= 0)
	{
		res = res*10 + n%10;
		n/=10;
	}
	if(res == temp)
		return 1;

	return 0;
}

int perfect_square(long long n)
{
	long long temp = sqrt(n);
	if(temp*temp == n)
		return 1;

	return 0;
}

int s(long long n)
{
	int s = 0;
	while(n != 0)
	{
		s+= (int) n%10;
		n/=10;
	}
	if(prime(s))
		return 1;

	return 0;
}

int main()
{
	int prime_n = 0, palindrome_n = 0, perfect_square_n = 0, s_n = 0;

	int n;
	scanf("%d", &n);
	long long arr[n];

	for(int i = 0;i < n;i++)
		scanf("%lld", &arr[i]);
	for(int i = 0; i < n;i++)
	{
		if(prime(arr[i]))
			prime_n++;
		if(palindrome(arr[i]))
			palindrome_n++;
		if(perfect_square(arr[i]))
			perfect_square_n++;
		if(s(arr[i]))
			s_n++;
	}

	printf("prime:%d\npalindrome:%d\nperfect square:%d\nsum:%d", prime_n, palindrome_n, perfect_square_n, s_n);

	return 0;
}