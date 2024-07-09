#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int arr[], int n)
{
	int index = 1;
	for(int i = n;i >= 0;i--)
	{
		for(int j = 0;j < i - 1;j++)
		{
			if(arr[j] > arr[j + 1])
				swap(arr + j, arr + j + 1);
		}
		printf("buoc %d: ", index++);
			for(int k = 0;k < n;k++)
				printf("%d ", arr[k]);
			printf("\n");
	}
}

void main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0;i < n;i++)
		scanf("%d", arr + i);
	bubble_sort(arr, n);
}