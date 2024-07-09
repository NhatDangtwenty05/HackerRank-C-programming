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
	sort(arr, 0, n - 1);

	long long sum = 0;
	for(int i = 0;i < n;i++)
		sum+=1ll*arr[i]*i;
	sum%=1000000007;
	printf("%lld", sum);

}