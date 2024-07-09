#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

struct student
{
	char name[100];
	char class[10];
	float GPA;
};

typedef struct student student;

int cmp(const void * a, const void * b)
{
	student * x = (student*) a;
	student * y = (student*) b;
	float temp;
	temp = y->GPA - x->GPA;
	if(temp > 0)
		return 1;
	else
		return -1;
}

void cin(student * x)
{
	int len;
	printf("enter the name:\n"); fgets(x->name, sizeof(x->name), stdin);
	len = strlen(x->name);
	x->name[len - 1] = '\0';
	printf("enter class:\n"); fgets(x->class, sizeof(x->class), stdin);
	len = strlen(x->class);
	x->class[len - 1] = '\0';
	printf("enter GPA:\n"); scanf("%f", &x->GPA);
	while(getchar() != '\n'){}
}

void cout(student x)
{
	printf("name: %s\n", x.name);
	printf("sclass: %s\n", x.class);
	printf("GPA: %.2f\n", x.GPA);
}

void find(student list[], int n, char names[])
{
	int b = 0;
	for(int i = 0;i < n;i++)
	{
		if(strcmp(names, list[i].name) == 0)
		{	
			b = 1;
			cout(list[i]);
		}
	}
	if(b)
		printf("founded\n");
	else
		printf("not found\n");
}

void valedictorian(student list[],int n)
{
	float max = 0;
	for(int i = 0;i < n;i++)
		max = fmax(max, list[i].GPA);
	printf("valedictorian:\n");
	for(int i = 0;i < n;i++)
		{
			if(max == list[i].GPA)
				cout(list[i]);
		}
}

void delete(student list[], int * n, char names[])
{
	for(int i = 0;i < *n;i++)
	{
		if(strcmp(names, list[i].name) == 0)
		{
			for(int j = i;j < *n;j++)
				list[j] = list[j + 1];
			
			(*n)--;
		}
	}
}

void sort(student list[], int n)
{
	qsort(list, n, sizeof(student),cmp);
	for(int i = 0;i < n;i++)
		cout(list[i]);
}

int main()
{
	int n;
	student list[1000];

	int b = 1;
	while(b)
	{
		printf("----------student manangerment system----------\n\n");
		printf("1. creates news list\n2. print\n3. find by name\n4. find valedictorian\n5. delete\n6. sort (9->0)\n0. end task\n");
		printf("-----------------------------------------------\n\n");
		printf("enter your act: ");
		int choice;
		scanf("%d", &choice);

			if(!choice)
				b = 0;

			if(choice == 1)
			{
				printf("enter quantity: ");
				scanf("%d", &n);
				while(getchar() != '\n'){}

				for(int i = 0;i < n;i++)
					cin(&list[i]);	
			}

			if(choice == 2)
			{
				if(list[0].name[0] == '\0')
				{
					printf("list is not avilable\n");
					continue;
				}
				for(int i = 0;i < n;i++)
					cout(list[i]);
			}
			
			if(choice == 3)
			{
				if(list[0].name[0] == '\0')
				{
					printf("list is not avilable\n");
					continue;
				}
				char name_3[100];
				getchar();
				fgets(name_3, sizeof(name_3), stdin);
				int len_3 = strlen(name_3);
				name_3[len_3 - 1] = '\0';
				find(list, n, name_3);
			}

			if(choice ==  4)
			{
				if(list[0].name[0] == '\0')
				{
					printf("list is not avilable\n");
					continue;
				}
				valedictorian(list, n);
			}

			if(choice == 5)
			{
				if(list[0].name[0] == '\0')
				{
					printf("list is not avilable\n");
					continue;
				}
				getchar();
				char name_5[100];
				printf("name who for delete: ");
				fgets(name_5, sizeof(name_5), stdin);
				int len_5 =strlen(name_5);
				name_5[len_5 - 1] = '\0';
				int * n_pointer = &n;
				delete(list, n_pointer, name_5);
			}

			if(choice == 6)
			{
				if(list[0].name[0] == '\0')
				{
					printf("list is not avilable\n");
					continue;
				}
				sort(list, n);
			}
	}

	return 0;
}