/*
Q00
void*형 요소를 갖는 단방향 연결리스트의 노드를 나타내는 타입을 정의하세요.
노드의 포인터를 head로 삼되, head의 주소를 전달받아 연결리스트를 조작하는 함수들을 작성하세요.

리스트의 가장 앞에 전달된 포인터를 삽입하는 함수를 작성하세요.
함수가 반환 된 후 head가 가리키는 노드는 전달된 포인터를 요소로 합니다.
함수 원형은 아래와 같습니다.

void list_add_front(list_node_t** head, const void* item)

리스트에서 전달받은 데이터와 같은 요소를 갖는 노드를 찾아 그 노드의 주소를 반환하는 함수를 작성하세요.
함수 원형은 아래와 같습니다.

node_t* list_find(list_node_t** head, const void* cmp_addr, size_t cmp_size)

리스트에서 전달받은 데이터와 같은 요소를 갖는 노드를 찾아 그 노드를 삭제하는 함수를 작성하세요.
단, 노드를 삭제할 때 요소 자체도 해제해야합니다.
함수 원형은 아래와 같습니다.

void list_remove(list_node_t** head, const void* cmp_addr, size_t cmp_size)*/

#ifndef ADD_H
#define ADD_H
#include <stdlib.h>

typedef struct list_node
{
    void* item;
    struct list_node* next;

}list_node_t;

void list_add_front(list_node_t** head, const void* item);
list_node_t* list_find(list_node_t** head, const void* cmp_addr, size_t cmp_size);
void list_remove(list_node_t** head, const void* cmp_addr, size_t cmp_size);

#endif ADD_H