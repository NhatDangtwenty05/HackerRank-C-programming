#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int comparator(const void *a, const void *b)
{
	int *x = (int*) a;
	int *y = (int*) b;

	return *x - *y;
}

int firt(int arr[], int left, int right, int key)
{
    int res = -1;
    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(arr[mid] == key)
        {
            res = mid;
            right = mid - 1;
        }
        else if(arr[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return res;
}

int last(int arr[], int left, int right, int key)
{
    int res = -1;
    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(arr[mid] == key)
        {
            res = mid;
            left = mid + 1;
        }
        else if(arr[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return res;
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	qsort(arr, n, sizeof(int), comparator);
	int k;
	scanf("%d", &k);
	long long answer = 0;
    for(int i = 0;i < n;i++)
    {
        int pos_1 = firt(arr, i + 1, n - 1, k - arr[i]);
        int pos_2 = last(arr, i + 1, n -1, k - arr[i]);
        if(pos_1 != -1)
            answer = answer + pos_2 - pos_1 + 1;
    }
    printf("%lld\n", answer);

    return 0;
}