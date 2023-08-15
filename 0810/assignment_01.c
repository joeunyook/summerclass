/*Q01
매개변수로 두 int 값을 전달받는 함수를 작성하세요.
전달받은 두 인자를 포함하여 그 사이의 모든 정수를 차례로 포함하는 int 배열을 동적할당 된 메모리에 작성하고 그 포인터를 반환하세요.
(ex: 매개변수가 -3, 5면 반환되는 배열은 { -3, -2, -1, 0, 1, 2, 3, 4, 5 })
(ex: 매개변수가 42, 39면 반환되는 배열은 { 42, 41, 40, 39 })
함수 원형은 아래와 같습니다.

int* range(int start, int end)*/

#include <stdio.h>
#include <stdlib.h>

int* range(int start, int end)
{

if(start>=end)
{
    int instant_num = start;
    start = end;
    end = instant_num;
}

int length = end - start + 1;
int *arr;
arr = (int*)malloc(sizeof(int)*length+1);

if(arr==NULL)
{
    printf("error");
}

for(int i=0; i<length; i++)
{
    arr[i] = start + i;
}
return arr;

}





