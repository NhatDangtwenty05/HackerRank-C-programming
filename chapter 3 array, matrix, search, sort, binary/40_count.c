#include <stdio.h>
#include <math.h>

int C(int k, int n)
{
	if(k == 0 || k == n)
		return 1;
	
	return C(k - 1, n - 1) + C(k, n - 1);
}

int array[1000001];

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	int max = -1000000;
	for(int i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
		array[arr[i]]++;
		max = fmax(max, arr[i]);
	}

	long long count = 0;
	for(int i = 0;i <= max;i++)
	{
		if(array[i] >= 2)
			count+=C(2, array[i]);
	}

	printf("%d", count);

	return 0;
}