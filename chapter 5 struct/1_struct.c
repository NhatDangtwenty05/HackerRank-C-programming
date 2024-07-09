#include <stdio.h>

struct student
{
	char name[100];
	char class[10];
	float GPA;
};
typedef struct student student;

void cin(student * x)
{
	printf("enter the name:\n"); gets(x->name);	// gets((*x).name);
	printf("enter class:\n"); gets(x->class); // gets((*x).class);
	printf("enter GPA:\n"); scanf("%f", &x->GPA);
}

void cout(student x)
{
	printf("name: %s\n", x.name);
	printf("sclass: %s\n", x.class);
	printf("GPA: %.2f\n", x.GPA);
}

int main()
{
	int n;
	scanf("%d", &n);
	student list[n];

	for(int i = 0;i < n;i++)
	{
		getchar();
		cin(&list[i]);
	}
	printf("\n");
	for(int i = 0;i < n;i++)
		cout(list[i]);
	
	return 0;
}