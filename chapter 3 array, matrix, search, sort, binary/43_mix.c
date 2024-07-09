#include <stdio.h>
#include <math.h>

void merge(int arr[], int left, int mid, int right)
{
	int n1 = mid - left + 1, n2 = right - mid;
	int x[n1], y[n2];
	for(int i = 0;i < n1;i++)
		x[i] = arr[left + i];
	for(int i = 0;i < n2;i++)
		y[i] = arr[mid + i + 1];

	int index = left, i = 0, j = 0;
	while(i < n1 && j < n2)
	{
		if(x[i] <= y[j])
			arr[index++] = x[i++];
		else
			arr[index++] = y[j++];
	}

	while(i < n1)
		arr[index++] = x[i++];

	while(j < n2)
		arr[index++] = y[j++];
}

void sort(int arr[], int left, int right)
{
	if(left < right)
	{
		int mid = (left + right) / 2;
		sort(arr, left, mid);
		sort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);

	int m;
	scanf("%d", &m);
	int array[m];
	for(int i = 0;i < n;i++)
		scanf("%d", &array[i]);

	sort(arr, 0, n - 1);
	sort(array, 0, m - 1);

	int indexn = 0;
	int indexm = 0; 
	for(int i = 0;i < n + m;i++)
	{
		if(i%2 == 0)
			printf("%d ", arr[indexn++]);
		else
			printf("%d ", array[indexm++]);
	}

	return 0;
}