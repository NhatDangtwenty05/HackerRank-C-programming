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
	return x->fre - y->fre;
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

int check(char tok[])
{
	if(strlen(tok)%2 != 0)
		return 0;
	int left = 0;
	int right = strlen(tok) - 1;
	while(left < right)
	{
		if(tok[left] != tok[right])
			return 0;
		left++;
		right--;
	}

	return 1;
}

int main()
{
	char temp[100];
	while(scanf("%s", temp) != -1)
	{
		int pos = find_pos(temp);
		if(pos == -1)
		{
			strcpy(list[frequency].token, temp);
			list[frequency].fre = 1;
			frequency++;
		}
		else
		{
			list[pos].fre++;
		}
	}

	qsort(list, frequency, sizeof(word), cmp);

	for(int i = 0;i < frequency;i++)
	{
		if(check(list[i].token))
			printf("%s   ", list[i].token);
	}

	return 0;
}