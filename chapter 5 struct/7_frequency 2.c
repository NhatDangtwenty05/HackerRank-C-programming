#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

struct word
{
	char token[100];
	int fre;
};

typedef struct word word;

int cmp(const void * a, const void * b)
{
	word * x = (word*) a;
	word * y = (word*) b;
	return y->fre - x->fre;
}

word list[1000];
int frequency = 0;

int find_pos(char c[])
{
	for(int i = 0;i < frequency;i++)
	{
		if(strcmp(c, list[i].token) == 0)
			return i;
	}

	return -1;
}


int main()
{
	char temp[100];
	while(scanf("%s", temp) != -1)
	{
		int len = strlen(temp);
		int pos = find_pos(temp);
		if(pos == -1 && (temp[len - 3] == '.' || temp[len - 4] == '.'))
		{
			strcpy(list[frequency].token, temp);
			list[frequency].fre = 1;
			frequency++;
		}
		else if(temp[len - 3] == '.' || temp[len - 4] == '.')
		{
			list[pos].fre++;
		}
	}

	qsort(list, frequency,sizeof(word), cmp);

	for(int i = 0;i < frequency;i++)
		printf("%s  %d\n", list[i].token, list[i].fre);
	

	return 0;
}