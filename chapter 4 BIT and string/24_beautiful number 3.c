#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
	char n[1000];
	fgets(n, sizeof(n), stdin);

	int leng = strlen(n) - 1;
	int up = 1;
	int down = 1;

	for(int i = 0;i < leng - 1;i++)
	{
		if(n[i] - n[i + 1] <= 0)
			up++;
		if(n[i] - n[i + 1] >= 0)
			down++;
	}

	if(up == leng || down == leng)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}