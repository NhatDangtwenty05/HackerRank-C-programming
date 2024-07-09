#include <stdio.h>

void print_left(int arr[], int left, int right)
{
	if(left > right)
		return;
	printf("%d ", arr[left]);
	print_left(arr, left + 1, right);
}

void print_right(int arr[], int right)
{
	if(right < 0)
		return;
	printf("%d ", arr[right]);
	print_right(arr, right - 1);
}

int main()
{
	int n;
	scanf("%d", &n);

	int arr[n];
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
	}
	print_left(arr, 0, n - 1);
	printf("\n");
	print_right(arr, n - 1);

	return 0;
}