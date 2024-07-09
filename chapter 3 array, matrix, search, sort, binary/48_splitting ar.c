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
		if(x[i] < y[j])
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
		int mid = (right + left) / 2;
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
	int k;
	scanf("%d", &k);

	sort(arr, 0, n - 1);

	int k1 = 0, k2 = 0;
	int k1s = 0, k2s = 0;
	for(int i = 0;i < k;i++)
	{
		k1+=arr[i];
		k1s+=arr[n - 1 - i];
	}

	for(int i = k;i < n;i++)
	{
		k2+=arr[i];
		k2s+=arr[n - 1 - i];
	}
	int ans1 = abs(k1 - k2);
	int ans2 = abs(k1s - k2s);
	int answer = fmax(ans1, ans2);
	printf("%d ", answer);
	return 0;
}