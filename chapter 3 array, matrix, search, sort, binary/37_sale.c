#include <stdio.h>
#include <math.h>

void main()
{
	int m25 = 0, m50 = 0;
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	for(int i = 0;i < n;i++)
	{
		if(arr[i] == 25)
			m25++;
		if(arr[i] == 50)
		{
			m50++;
			m25--;
		}

		if(arr[i] == 100)
		{
			if(m50 > 0)
			{
				m50--;
				m25--;
			}
			else
				m25-=3;
		}

		if(m25 < 0 || m50 < 0)
		{
			printf("No");
			return;
		}
	}

	printf("yes");
	return;
}