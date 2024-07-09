#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int arr[], int n)
{
	int index = 1;
	for(int i = 1;i < n;i++)
	{
		int position = i - 1, value = arr[i];
		while(position >= 0 && 	value < arr[position])
		{
			arr[position + 1] = arr[position];
			position--;
			printf("buoc %d: ", index++);
			for(int k = 0;k < n;k++)
				printf("%d ", arr[k]);
			printf("\n");
		}
		arr[position + 1] = value;
	}
	printf("buoc %d: ", index++);
			for(int k = 0;k < n;k++)
				printf("%d ", arr[k]);
			printf("\n");
}

void main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0;i < n;i++)
		scanf("%d", arr + i);
	
	insertion_sort(arr, n);
}