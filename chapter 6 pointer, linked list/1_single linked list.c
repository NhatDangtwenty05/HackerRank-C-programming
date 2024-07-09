#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node
{
	int data;
	struct node * next;	
};

typedef struct node node;

void cout(node * head)
{
	if(head == NULL)
		printf("not avaliable\n");
	while(head != NULL)
	{
		printf("%d\n", head->data);
		head = head->next;
	}
}

node * make_node(int x)
{
	node * new_node = (node*) malloc(sizeof(node));
	new_node->data = x;
	new_node->next = NULL;

	return new_node;
}

int size(node * head)
{
	int count = 0;
	while(head->next != NULL)
	{
		count++;
		head = head->next;
	}

	return count;
}

void push_front(node ** head, int x)
{
	node * new_node = make_node(x);
	new_node->next = (*head);
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
	{
		temp = temp->next;
	}
	temp->next = new_node;
}

void insert(node ** head, int x, int position)
{
	if(position == 1)
	{
		push_front(head, x);
		return;
	}
	node * new_node = make_node(x);
	if((*head) == NULL)
	{
		(*head) = new_node;
		return; 
	}
	int index = 1;
	node * temp = (*head);
	node * temps = (*head);
	while(index++ < position)
	{	
		if(temp->next == NULL)
			push_back(head, x);
		temp = temp->next;
		if(index <= position - 1)
			temps = temps->next;
	}

	temps->next = new_node;
	new_node->next = temp;
}

void insert_2_0(node ** head, int x, int position)
{
	int len = size(*head);
	if(position < 1 || position > len);
		return;
	if(position == 1)
		push_front(head, x);
	else if(position == len)
		push_back(head, x);
	else
	{
		node * temp = (*head);
		node * new_node = make_node(x);
		for(int i = 1;i < position - 1;i++)
			temp = temp->next;
		new_node->next = temp->next;
		temp->next = new_node;
	}
}

void pop_front(node ** head)
{
	if((*head) == NULL)
		return;
	node * temp = (*head);
	(*head) = temp->next;
	free(temp);
}

void pop_back(node ** head)
{
	if((*head) == NULL)
		return;
	else if((*head)->next == NULL)
	{
		node * temp = (*head);
		(*head) = NULL;
		free(temp);
	}	
	else
	{	node * temp;
		while((*head)->next->next != NULL)
		{
			(*head) = (*head)->next;
			temp = (*head)->next->next;
		}
		(*head)->next = NULL;
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
		for(int i = 1;i < k - 1;i++)
			(*head) = (*head)->next;
		temp = (*head)->next;
		(*head)->next = (*head)->next->next;
		free(temp);
	}
}

void selection_sort(node ** head)
{
	for(node * i = (*head);i->next != NULL;i = i->next)
	{
		node * min = i;
		for(node * j = i;j != NULL;j = j->next)
		{
			if(min->data > j->data)
			{
				int temp = min->data;
				min->data = j->data;
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
		printf("-------------\n");
		printf("1. push front\n2. push back\n3. print\n4. insert\n5. pop front\n6. pop back\n7. pop position k\n8. sort\n0. end task\n");
		printf("-------------\n");
		printf("enter (number) your choice: ");
		scanf("%d", &choice);

		if(choice == 1)
		{
			int x;
			printf("enter data:");
			scanf("%d", &x);
			push_front(&head, x);
		}
		if(choice == 2)
		{
			int _x;
			printf("enter data:");
			scanf("%d", &_x);
			push_back(&head, _x);
		}
		if(choice == 3)
			cout(head);
		if(choice == 4)
		{
			int position;
			printf("enter position:");
			scanf("%d", &position);
			int _x_;
			printf("enter data:");
			scanf("%d", &_x_);
			insert(&head, _x_, position);
		}
		if(choice == 5)
			pop_front(&head);
		if(choice == 6)
		{
			node * temp = head;
			pop_back(&temp);
		}
		if(choice == 7)
		{
			int k;
			printf("enter position:");
			scanf("%d", &k);
			node * temp = head;
			pop_k(&temp, k);
		}
		if(choice == 8)
			selection_sort(&head);
		if(choice == 0)
			b = 0;
	}

	return 0;
}