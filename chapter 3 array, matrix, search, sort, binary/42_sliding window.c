#include <stdio.h>
#include <math.h>

int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	int arr[n + 1];

	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	arr[n] = arr[n - 1];

	int count = 1;
	int sum = arr[0], answer = arr[0];
	int pos = 0;
	for(int i = 1;i < n + 1;i++)
	{	
		if(arr[i] != arr[i - 1])
		{
			count++;
			sum+=arr[i];
		}
		else
		{
			if(count == k && sum > answer)
			{
				answer = sum;
				pos = i;
			}
			sum = arr[i];
			count = 1;
		}
	}
	printf("%d\n", answer);
	for(int i = pos - k;i < pos;i++)
		printf("%d ", arr[i]);

	return 0;
}