#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char c[100];
	char temp[100];
	int index = 0;
	fgets(c, sizeof(c), stdin);
	for(int i = 0;i < strlen(c);i++)
	{
		if(c[i] == '2' || c[i] == '8' || c[i] == 't' || c[i] == 'e' || c[i] == 'c' || c[i] == 'h')
			continue;
		temp[index++] = c[i];
	}
	temp[index] = '\0';
	printf("%s\n", temp);

	return 0;
}
