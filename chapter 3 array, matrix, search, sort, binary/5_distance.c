#include <stdio.h>
#include <math.h>

int distance(int arr[], int n)
{
	int distance = abs(arr[0] - arr[n - 1]);
	for(int i = 0;i < n - 1;i++)
		for(int j = i + 1;j < n;j++)
			distance = fmin(distance, abs(arr[i] - arr[j]));

	return distance;
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);

	printf("%d", distance(arr, n));

	return 0;
}