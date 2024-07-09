#include <stdio.h>
#include <math.h>

int count[10000001];

void counting_sort(long long arr[], int n)
{
	int position = 0;
	for(int i = 0;i < n;i++)
		count[arr[i]]++;
	for(int i = 0;i < 10000001;i++)
	{
		while(count[i] != 0)
		{
			arr[position] = i; 
			position++;
			count[i]--;
		}
	}
}

void CountingSort(long long arr[], int n)
{
	int k = -1e9;
	for(int i = 0;i < n;i++)
		k = fmax(k, arr[i]);

	for(int i = 0;i < n;i++)
		count[arr[i]]++;

	for(int i = 0;i < k + 1;i++)
		for(int j = 0;j < count[i];j++)
			printf("%d ", i);

}

int main()
{
	int n;
	scanf("%d", &n);
	long long arr[n];

	for(int i = 0;i < n;i++)
		scanf("%lld", &arr[i]);
	
	printf("Kind you want to sorting (scan 1 or 0)");
	int kind;
	scanf("%d", &kind);

	if(kind)
	{
		counting_sort(arr, n);
		for(int i = 0;i < n;i++)
			printf("%lld ", arr[i]);
	}
	else
	CountingSort(arr, n);

	return 0;
}