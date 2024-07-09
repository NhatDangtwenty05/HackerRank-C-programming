#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node
{
	int data;
	struct node * next;
	struct node * prev;	
};

typedef struct node node;

node * make_node(int x)
{
	node * new_node = (node*) malloc(sizeof(node));
	new_node->data = x;
	new_node->next = NULL;
	new_node->prev = NULL;

	return new_node;
}

void push_front(node ** head, int x)
{
	node * new_node = make_node(x);
	new_node->next = (*head);
	if((*head) != NULL)
		(*head)->prev = new_node;
	(*head) = new_node;
}


void flip(node ** head) 
{
    node * temp = NULL;
    node * currant = (*head); 
    while (currant != NULL) 
    {
        temp = currant->prev;
        currant->prev = currant->next;
        currant->next = temp;

        currant = currant->prev;
    }

    if(temp != NULL)
    {
        (*head) = temp->prev;
        temp = temp->prev;
    }
}

void print(node * head)
{
    if(head == NULL)
        return;
    node * temp = head;
    while(temp != NULL)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}

void free_list(node * head)
{
    node * temp = NULL;
    while(head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main()
{
    int x;
    node * head = NULL;

    while(scanf("%d", &x) != EOF)
        push_front(&head, x);
    print(head);
    printf("\n");
    flip(&head);
    print(head);
    free_list(head);

    return 0;
}