#include <stdio.h>
#include <math.h>

int n = 10000000;
int arr[10000001];
void prime()
{
	for(int i = 0;i < n;i++)
		arr[i] = 1;
	
	arr[0] = arr[1] = 0;

	for(int i = 2;i < sqrt(n);i++)
	{
		if(arr[i] == 1)
		{
			for(int j = i*i;j < n;j+=i)
				arr[j] = 0;
		}
	}

}

int main()
{
	prime();
	for(int i = 0;i < 1000;i++)
	{
		if(arr[i])
			printf("%d ", i);
	}

	return 0;
}