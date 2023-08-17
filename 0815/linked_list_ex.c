#include <stdio.h>
#include <stdlib.h>

typedef struct st_list_node
{
	int item;
	struct st_list_node* next;
	struct st_list_node* prev;
} list_node_t;

void insert_front(list_node_t** head, int item)
{
	list_node_t* new = (list_node_t*)malloc(sizeof(list_node_t));
	new->item = item;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	if (new->next != NULL)
	{
		(*(new->next)).prev = new;
	}
	return;
}

int main(void)
{
	list_node_t* head = NULL;
	insert_front(&head, 42);
	insert_front(&head, 33);

	list_node_t* node = head;
	while (node != NULL)
	{
		printf("%d\n", node->item);
		node = node->next;
	}

	node = head;
	while (node != NULL)
	{
		list_node_t* temp = node;
		node = node->next;
		free(temp);
	}
	return 0;
}
