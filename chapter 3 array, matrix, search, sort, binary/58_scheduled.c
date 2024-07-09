#include <stdio.h>
#include <math.h>

int days[32];

int main()
{
	int n;
	int x, y;
	int res;
	scanf("%d", &n);
	for(int i = 0;i < n;i++)
	{
		res = 1;
		scanf("%d%d", &x, &y);
		for(int j = x;j <= y;j++)
		{
			if(days[j] != 0)
				res = 0;
		}
		if(res)
		{
			days[x]++;
			days[y]++;
		}
	}
	int count = 0;
	for(int i = 1;i < 32;i++)
	{
		if(days[i] != 0)
			count++;
	}
	count/=2;
	printf("%d", count);
	return 0;
}