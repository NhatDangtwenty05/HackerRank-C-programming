#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct Student
{
	char name[100];
	char ID[100];
	double GPA;
};

typedef struct Student student;

int main()
{
	FILE * f;
	f = fopen("6_binary.bin", "wb");
	student x;
	strcpy(x.name, "Nguyen Nhat Dang");
	strcpy(x.ID, "B696969");
	x.GPA = 4.1;
	fwrite(&x, sizeof(student), 1, f);
	fclose(f);
	f = fopen("6_binary.bin", "rb");
	student y;
	fread(&y, sizeof(student), 1, f);
	printf("%s\n%s\n%.1f", y.name, y.ID, y.GPA);
	fclose(f);

	return 0;
}