#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
	char c[100];
	char temp[103];
	fgets(c, sizeof(c), stdin);
	int count = -1;
	int index = 0;
	for(int i = strlen(c) - 1;i >= 0;i--)
	{
		count++;
		temp[index] = c[i];
		index++;
		if(count%3 == 0 && index != 0 && i != 0)
		{
			temp[index] = ',';
			index++;
		}
	}
	temp[index] = '\0';
	strrev(temp);
	temp[index - 2] = '\0';
	printf("%s\n", temp);

	return 0;
}

