#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct web
{
	char address[100];
	int fre;
};

typedef struct web web;

int check(char c[])
{
	int len = strlen(c);
	if(len > 4 && (c[len - 3] == '.' || c[len - 4] == '.'))
		return 1;

	return 0;
}

void add(web w[], char temp[], int * index)
{
	if(check(temp))
	{
		for(int i = 0; i < (*index);i++)
		{
			if(strcmp(w[i].address, temp) == 0)
			{
				w[i].fre++;
				return;
			}
		}
		strcpy(w[(*index)].address, temp);
		w[(*index)].fre = 1;
		(*index)++;
	}
}

int main()
{
	int index = 0;
	int * pointer_index = &index;
	web list[10];
	char temp[100];
	FILE * f;
	f = fopen("5_web.txt", "r");
	if(f == NULL)
	{
		perror("ERR");
		return 0;
	}
	while(fscanf(f, "%s", temp) != EOF)
		add(list, temp, pointer_index);
	fclose(f);
	f = fopen("5_return.txt", "w");
	for(int i = 0;i < index;i++)
		fprintf(f , "%s %d\n", list[i].address, list[i].fre);
	fclose(f);

	return 0;
}
