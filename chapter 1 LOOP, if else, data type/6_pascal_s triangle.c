#include <stdio.h>
#include <math.h>

typedef long long ll;

int c(int n, int k)
{
	int res = 1;
	int min = fmin(k,n-k);
	for(int i = 1;i <= min;i++)
		{
		res*=(n-i+1);
		res/=i;
		}

	return res;	
}

int main()
{
	int n;
	scanf("%d", &n);

	for(int i =0;i <= n;i++)
	{
		for(int j = 0;j <= i;j++)
		{
			int k = c(i,j);
			printf("%d ", k);
		}
		printf("\n");
	}
}