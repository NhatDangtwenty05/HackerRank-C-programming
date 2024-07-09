#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

struct node
{
	char data[100];
	int fre;
	struct node * next;
};

typedef struct node node;

node * make_node(char c[])
{
	node * newnode = (node*) malloc(sizeof(node));
	strcpy(newnode->data, c);
	newnode->next = NULL;
	newnode->fre = 1;

	return newnode;
}

void push_front(node ** head, char c[])
{
	node * newnode = make_node(c);
	newnode->next = (*head);
	(*head) = newnode;
}

void add(node ** head, char c[]) 
{
    node * temp = (*head);
    while (temp != NULL) 
    {
        if (strcmp(temp->data, c) == 0) 
        {
            temp->fre++;
            return;
        }
        temp = temp->next;
    }
    push_front(head, c);
}

int main()
{
	node * head = NULL;
	char c[100];
	while(scanf("%s", c) != EOF)
	{
        add(&head, c);
    }

	for(node * i = head;i != NULL;i = i->next)
		printf("%s %d\n", i->data, i->fre);

	while (head != NULL) 
	{
        node * temp = head;
        head = head->next;
        free(temp);
    }
	return 0;
}