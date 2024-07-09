#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
	char n[1000];
	fgets(n, sizeof(n), stdin);
	int answer = 0;

	for(int i = 0;i < strlen(n) - 1;i++)
		answer+=(n[i] - '0');
	printf("%d", answer);

	return 0;
}