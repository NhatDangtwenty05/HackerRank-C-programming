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

int size(node * head)
{
	node * temp = head;
	int count = 0;
	while(temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return count;
}

void print(node * head)
{
	node * temp = head;
	while(temp != NULL)
	{
		printf("%d,   ", temp->data);
		temp = temp->next;
	}
}

void prints(node * head)
{
	if(head == NULL)
		return;
	while(head->next != NULL)
		head = head->next;
	while(head != NULL)
	{
		printf("%d,   ", head->data);
		head = head->prev;
	}
}

void push_front(node ** head, int x)
{
	node * new_node = make_node(x);
	new_node->next = (*head);
	if((*head) != NULL)
		(*head)->prev = new_node;
	(*head) = new_node;
}

void push_back(node ** head, int x)
{
	node * new_node = make_node(x);
	if((*head) == NULL)
	{
		(*head) = new_node;
		return;
	}
	node * temp = (*head);
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
}

void insert(node ** head, int x, int k)
{
	int len = size(*head);
	if(k < 1 || k > len)
		return;
	else if(k == 1)
		push_front(head, x);
	else if(k == len + 1)
		push_back(head, x);
	else
	{
		node * temp = (*head);
		node * new_node = make_node(x);
		for(int i = 1;i < k - 1;i++)
			temp = temp->next;
		new_node->next = temp->next;
		new_node->prev = temp;
		temp->next->prev = new_node;
		temp->next = new_node;
	}
}

void pop_front(node ** head)
{
	if((*head) == NULL)
		return;
	node * temp = (*head);
	(*head) = (*head)->next;
	(*head)->prev = NULL;
	free(temp);
}

void pop_back(node ** head)
{
	if((*head) == NULL)
		return;
	node * temp = (*head);
	if((*head)->next == NULL)
	{
		(*head) = NULL;
		free(temp);
		return;
	}
	else
	{
		while (temp->next != NULL)
	        temp = temp->next;
	    temp->prev->next = NULL;
	    free(temp);
	}
}

void pop_k(node ** head, int k)
{
	int len	= size(*head);
	if(k < 1 || k > len)
		return;
	else if(k == 1)
		pop_front(head);
	else if(k == len)
	{
		node ** temp = head;
		pop_back(temp);
	}
	else
	{
		node * temp = (*head);
		for(int i = 1;i < k;i++)
			temp = temp->next;
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
	}
}

void selection_sort(node ** head)
{
	int len = size(*head);
	if(len < 2)
		return;
	for(node * i = (*head);i->next != NULL;i = i->next)
	{
		for(node * j = i;j != NULL;j = j->next)
		{
			if(i->data > j->data)
			{
				int temp = i->data;
				i->data = j->data;
				j->data = temp;
			}
		}
	}
}


int main()
{
	node * head = NULL;
	int b = 1;
	while(b)
	{
		int choice;
		printf("\n-------------\n");
		printf("1. push front\n2. push back\n3. print\n4. insert\n5. pop front\n6. pop back\n7. pop position k\n8. sort\n9. prints\n0. end task\n");
		printf("-------------\n");
		printf("enter (number) your choice: ");
		scanf("%d", &choice);

		if(choice == 1)
		{
			printf("enter data:");
			int x;
			scanf("%d", &x);
			push_front(&head, x);
		}
		if(choice == 2)
		{
			printf("enter data:");
			int x;
			scanf("%d", &x);
			push_back(&head, x);
		}
		if(choice == 3)
			print(head);
		if(choice == 4)
		{
			printf("enter position:");
			int k;
			scanf("%d", &k);
			printf("enter data:");
			int x;
			scanf("%d", &x);
			insert(&head, x, k);
		}
		if(choice == 5)
			pop_front(&head);
		if(choice == 6)
			pop_back(&head);
		if(choice == 7)
		{
			printf("enter position:");
			int k;
			scanf("%d", &k);
			pop_k(&head, k);
		}
		if(choice == 8)
		{
			node * temp = head;
			selection_sort(&temp);
		}
		if(choice == 9)
			prints(head);
		if(choice == 0)
			b = 0;
	}

	return 0;
}