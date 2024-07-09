#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int array[1000001];

int main()
{
	int n;
    int min = (int) 1e9;
    int max = (int) -1e9; 
	scanf("%d", &n);
	int arr[n];
	for(int i = 0;i < n;i++)
	{
        scanf("%d", &arr[i]);
        array[arr[i]]++;
        min = fmin(min, arr[i]);
        max = fmax(max, arr[i]);
    }

    int count = 0;
    for(int i = min;i <= max;i++)
    {
        if(array[i] == 0)
            count++;
    }
    printf("%d", count);

    return 0;
}