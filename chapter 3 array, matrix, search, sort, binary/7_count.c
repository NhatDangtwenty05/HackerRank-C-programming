#include <stdio.h>
#include <math.h>

void check(int arr[], int n)
{
	int count, cnt;

	for(int i = 0;i < n;i++)
	{
		count = 1;
		cnt = 0;
		for(int j = i + 1;j < n;j++)
			if(arr[i] == arr[j])
				count++;

		for(int k = 0;k < i;k++)
			if(k != i && arr[i] == arr[k])
				cnt++;

		if(cnt == 0)
			printf("%d %d\n", arr[i], count);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	check(arr, n);

	return 0;
}