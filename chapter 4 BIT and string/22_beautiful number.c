#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int check(char num)
{
	int temp = num - 48;
	for(int i = 2;i < sqrt(temp);i++)
	{
		if(temp%i == 0)
			return 0;
	}

	return 1;
}

int sum(char n[])
{
	int leng = strlen(n) - 1;
	int ans = 0;
	for(int i = 0;i < leng;i++)
	{
		if(n[i] != '2' && n[i] != '3' && n[i] != '5' && n[i] != '7')
			return 0;
		ans+=(n[i] - 48);
	}

	return ans;
}

int main()
{
	char n[1000];
	fgets(n, sizeof(n), stdin);
	
	int ans = sum(n);
	int bool = check(ans);
	if(bool)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}