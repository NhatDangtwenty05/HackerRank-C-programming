#include <stdio.h>
#include <math.h>

void check(int arr[], int n)
{
	int count;
	for(int i = 0;i < n;i++)
	{
		count = 0;
		for(int j = i - 1;j > -1;j--)
		{
			if(i != j && arr[i] == arr[j])
				count++;
		}

		if(count == 0)
			printf("%d ", arr[i]);
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