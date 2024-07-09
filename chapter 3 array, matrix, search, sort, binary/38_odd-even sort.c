#include <stdio.h>
#include <math.h>

void sort_AZ(int arr[],int n)
{
	int position;
	int temp;

	for(int i = 0;i < n - 1;i++)
	{
		position = i;
		for(int j = i + 1;j < n;j++)
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
	}
}

void sort_ZA(int arr[],int n)
{
	int position;
	int temp;

	for(int i = 0;i < n - 1;i++)
	{
		position = i;
		for(int j = i + 1;j < n;j++)
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
	}
}

void main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);

	int countE = 0, countO = 0;
	int event[n];
	int odd[n];
	for(int i = 0; i < n;i++)
	{
		if(arr[i]%2 == 0)
		{
			event[countE] = arr[i];
			countE++;
		}
		else
		{
			odd[countO] = arr[i];
			countO++;
		}
	}

	sort_AZ(odd, countO);
	sort_ZA(event, countE);

	for(int i = 0;i < countO;i++)
		printf("%d ", odd[i]);
	for(int i = 0;i < countE;i++)
		printf("%d ", event[i]);
}