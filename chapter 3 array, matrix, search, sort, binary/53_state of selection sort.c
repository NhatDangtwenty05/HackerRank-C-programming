#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0;i < n;i++)
		scanf("%d", arr + i);

	for(int i = 0;i < n - 1;i++)
	{
		for(int j = i + 1;j < n;j++)
		{
			if(arr[i] > arr[j])
				swap(arr + i, arr + j);
		}
		printf("trang thai %d: ", i + 1);
		for(int k = 0;k < n;k++)
			printf("%d ", arr[k]);
		printf("\n");
	}
}