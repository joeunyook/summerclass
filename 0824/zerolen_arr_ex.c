#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct st_list_node
{
	struct st_list_node* next;
	struct st_list_node* prev;
	char str[];
} list_node_t;

int main(void)
{
	char name[] = "kim suhanmu asdf wef iwqjef;oijewqf ;ewoijfewq;oifjwoijfe";
	list_node_t head;
	head.next = &head;
	head.prev = &head;
	list_node_t* newNode = (list_node_t*)malloc(sizeof(list_node_t) + strlen(name) + 1);
	newNode->next = head.next;
	newNode->prev = &head;
	newNode->next->prev = newNode;
	newNode->prev->next = newNode;
	strcpy(newNode->str, name);
	printf("%s\n", head.next->str);
	return 0;
}
