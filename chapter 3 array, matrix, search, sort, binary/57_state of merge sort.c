#include <stdio.h>
#include <math.h>

void sort(int arr[],int b[], int c[], int n, int m)
{
	int index = 0, i = 0, j = 0;
	while(i < n && j < m)
	{
		if(b[i] <= c[j])
			arr[index++] = b[i++];
		else
			arr[index++] = c[j++];
	}

	while(i < n)
		arr[index++] = b[i++];

	while(j < m)
		arr[index++] = c[j++];
}

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int b[n], c[m];
	for(int i = 0;i < n;i++)
		scanf("%d", b + i);
	for(int i = 0;i < m;i++)
		scanf("%d", c + i);
	int arr[n + m];

	sort(arr, b, c, n, m);
	for(int i = 0;i < n + m;i++)
		printf("%d ", arr[i]);

	return 0;
}