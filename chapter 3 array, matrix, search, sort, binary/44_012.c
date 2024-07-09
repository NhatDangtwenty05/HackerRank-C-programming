#include <stdio.h>
#include <math.h>

int main()
{
	int count[3] = {0, 0, 0};
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
		count[arr[i]]++;
	}

	int index = 0;
	for(int i = 0;i < 3;i++)
	{
		while(count[i] != 0)
		{
			arr[index++] = i;
			count[i]--;
		}

	}

	for(int i = 0;i < n;i++)
		printf("%d ", arr[i]);
}