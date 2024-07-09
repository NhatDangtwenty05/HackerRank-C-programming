#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int comparator(const void *a, const void *b)
{
	int *x = (int*) a;
	int *y = (int*) b;

	return *x - *y;
}

int find(int arr[], int left, int right, int key)
{
    int res = -1;
    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(arr[mid] < key)
        {
            res = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
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
        int left = i + 1, right = n - 1;
        int pos = find(arr, left, right, k - arr[i]);
        if(pos != -1)
            answer = answer + pos - i;
    }
    printf("%lld\n", answer);

    return 0;
}