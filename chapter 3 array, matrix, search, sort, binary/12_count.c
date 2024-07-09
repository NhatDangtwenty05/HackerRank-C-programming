#include <stdio.h>
#include <math.h>

int mark(long long arr[], int n)
{
	int count = 0;
	int check;
	for(int i = 0;i < n;i++)
	{
		check = 0;
		for(int j = i - 1; j >= 0;j--)
		{
			if(arr[i] == arr[j])
				check++;
		}
		if(check == 0)
			count++;
	}

	return count;
}

int main()
{
	int n;
	scanf("%d", &n);
	long long arr[n];

	for(int i = 0;i < n;i++)
		scanf("%lld", &arr[i]);

	printf("%d", mark(arr, n));

	return 0 ;
}