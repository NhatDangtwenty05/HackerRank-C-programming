#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	int d;
	scanf("%d", &d);

	int count = 0;
	int temp;
	int k;
	for(int i = 0;i < n - 1;i++)
	{
		while(arr[i + 1] < arr[i])
		{
			temp = arr[i + 1] - arr[i];
			if(temp < d)
			{
				arr[i + 1]+=d;
				count++;
			}
			else
			{
				k = temp / d;
				count+=k;
				arr[i + 1]+=k*d;
			}

		}
		if(arr[i + 1] == arr[i])
		{
			arr[i + 1]+=d;
			count++;
		}
	}

	for(int i = 0;i < n;i++)
		printf("%d ", arr[i]);
	printf("\n%d", count);

	return 0;
}