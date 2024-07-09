#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n + 1];

	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	arr[n] = arr[n - 1];
	int count = 1, answer = 1;
	int sum = arr[0], answer_sum = arr[0]; 
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
			if(count > answer)
			{
				answer = count;
				pos = i - count;
				answer_sum = sum;
			}
			else if(count == answer)
			{
				if(sum > answer_sum)
				{
					pos = i - count;
					answer_sum = sum;
				}
			}
			count = 1;
			sum = arr[i];
		}
	}
	printf("%d\n", answer);
	for(int i = 0; i < answer;i++)
		printf("%d ", arr[pos++]);

	return 0;
}