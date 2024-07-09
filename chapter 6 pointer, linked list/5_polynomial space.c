#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

struct node
{
	int factor;
	int expon;
	struct node * next;
};

typedef struct node node;

node * make_node(int f, int e) 
{
    node * new_node = (node *) malloc(sizeof(node));
    new_node->factor = f;
    new_node->expon = e;
    new_node->next = NULL;

    return new_node;
}

void push_back(node **head, int f, int e) 
{
    node * new_node = make_node(f, e);
    if ((*head) == NULL) 
    {
        (*head) = new_node;
        return;
    }
    node * temp = (*head);
    while (temp->next != NULL) 
        temp = temp->next;
    temp->next = new_node;
}

void add(node **head, int f, int e) 
{
    if ((*head) == NULL) 
    {
        push_back(head, f, e);
        return;
    }
    node * temp = (*head);
    while (temp != NULL) 
    {
        if (temp->expon == e) 
        {
            temp->factor += f;
            return;
        }
        temp = temp->next;
    }
    push_back(head, f, e);
}

void print(node * head)
{
	if(head == NULL)
		return;
	while(head != NULL)
	{	if(head->next != NULL)
			printf("%dx^%d + ", head->factor, head->expon);
		else
			printf("%dx^%d", head->factor, head->expon);
		head = head->next;
	}
}

int main()
{
	char c[100];
	int factor, expon;
	node * head = NULL;
	while(scanf("%s", c) != EOF)
	{
		sscanf(c, "%dx^%d", &factor, &expon);
		add(&head, factor, expon);
	}
	print(head);

	return 0;
}