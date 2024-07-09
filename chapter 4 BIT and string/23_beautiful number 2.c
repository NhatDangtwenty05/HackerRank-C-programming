#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int check(char n[])
{
	int num_6 = 0;
	int left = 0;
	int right = strlen(n) - 2;
	while(left <= right)
	{
		if(n[left] == '6' || n[right] == '6')
		{
			num_6 = 1;
		}
		
		if(n[left] != n[right])
			return 0;

		left++;
		right--;
	}

	return num_6;
}

int main()
{
	char n[1000];
	fgets(n, sizeof(n), stdin);

	if(check(n))
		printf("Yes\n");
	else
		printf("No\n");

	return	0;
}