#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void standardized(char c[], char res[])
{
	char * token = strtok(c, " ");
	int index = 0;
	while(token != NULL)
	{
		res[index++] = toupper(token[0]);
		for(int i = 1;i < strlen(token);i++)
			res[index++] = tolower(token[i]);
		res[index++] = ' ';
		token = strtok(NULL, " ");
	}
	res[index] = '\0';
}

void convert(char c[], char res[])
{
	char a[100][100];
	int n = 0;
	char * token = strtok(c, " ");
	while(token != NULL)
	{
		strcpy(a[n++], token);
		token = strtok(NULL, " ");
	}
	strcpy(res, a[n - 1]);
	for(int i = 0;i < n - 1;i++)
		strcat(res, a[i]);
	res[strlen(res) - 1] = '\0'; 
}

int cmp(const void * a, const void * b)
{
	char * x = (char*) a;
	char * y = (char*) b;
	char res1[100];
	char res2[100];
	char temp1[100];
	char temp2[100];
	strcpy(temp1, x);
	strcpy(temp2, y);
	convert(temp1, res1);
	convert(temp2, res2);

	return strcmp(res1, res2);
}

int main()
{
	char name[100];
	char a[100][100];
	int n = 0; 
	FILE * f;
	f =fopen("7_name.txt", "r");
	if(f == NULL)
		return 0;
	FILE * ft;
	ft = fopen("7_return.txt", "w");
	while(fgets(name, sizeof(name), f) != NULL)
	{
		name[strlen(name) - 1] = '\0';
		char res[100];
		standardized(name, res);
		strcpy(a[n++], res);
	}
	qsort(a, n, sizeof(a[0]), cmp);
	for(int i = 0;i < n;i++)
		fprintf(ft , "%s\n", a[i]);
	
	fclose(f);
	fclose(ft);

	return 0;
}