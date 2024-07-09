#include <stdio.h>
#include <math.h>

int count(int arr[], int n, int k)
{
	int count = 0;
	for(int i = 0;i < n - 1;i++)
	{
		for(int j = i + 1;j < n;j++)
		{
			if(arr[i] + arr[j] == k)
				count++;
		}
	}

	return count;
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	int k;
	scanf("%d", &k);

	printf("%d", count(arr, n, k));

	return 0;
}