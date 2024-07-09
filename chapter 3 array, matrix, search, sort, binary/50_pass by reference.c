#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int n = -1;
	int *ptr_n = &n;
	scanf("%d", ptr_n);
	int *arr = (int*) malloc(n * sizeof(n));
	for(int i = 0;i < n;i++)
		scanf("%d", arr + i);

	swap(arr, arr + n - 1);

	for(int i = 0;i < n;i++)
		printf("%d ", *(arr + i));

	return 0;
}