#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct Student
{
	char class[10];
	char name[100];
	char from[50];
	char ID[10];
};

typedef struct Student student;


int main()
{
	student list[100];
	int n = 0;

	FILE * f;
	f = fopen("8_student.txt", "r");
	if(f == NULL)
		return 0;
	while(fgets(list[n].class, 10, f) != NULL)
	{
		if(strcmp(list[n].class, "CNTT1\n") == 0)
		{
			fgets(list[n].name, 100, f);
			strcpy(list[n].name, "Nguyen Nhat Dang\n");
			fgets(list[n].from, 50, f);
			fgets(list[n].ID, 10, f);
			n++;
		}
		else
		{
			fgets(list[n].name, 100, f);
			fgets(list[n].from, 50, f);
			fgets(list[n].ID, 10, f);
			n++;
		}
	}
	fclose(f);
	f = fopen("8_return.bin", "wb");
	for(int i = 0;i < n;i++)
		fwrite(&list[i], sizeof(student), 1, f);
	fclose(f);

	return 0;
}