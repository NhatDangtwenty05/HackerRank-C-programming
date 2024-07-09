#include <stdio.h>
#include <stdlib.h>

int comparator(const void *a, const void *b)
{
	int *x = (int*) a;
	int *y = (int*) b;
	return *x - *y;
}

void main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0;i < n;i++)
		scanf("%d", arr + i);
	
	qsort(arr, n, sizeof(int), comparator);
	int count = 1;
	for(int i = 0;i < n - 1;i++)
		if(arr[i] != arr[i + 1])
			count++;

	printf("%d", count);
}