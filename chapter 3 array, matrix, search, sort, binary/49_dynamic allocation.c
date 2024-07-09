#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d", &n);

	int *arr = (int*) malloc(n * sizeof(int));

	for(int i = 0;i < n;i++)
		scanf("%d", arr + i);

	for(int i = 0;i < n;i++)
		printf("%d ", *(arr + i));

	free(arr);

	return 0;
}