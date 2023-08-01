/*Q00
문자열 movement를 선언하세요.
문자열 movement의 값과 길이는 채점 중 임의로 변경됩니다.
단, 문자열 movement는 대소문자를 구별하지 않고 "wasd"의 조합으로만 이루어짐을 보장합니다.
(ex str == "WasssssddDwd")
5 * 5 칸을 갖는 공간에서 플레이어를 움직이고 출력하세요.
단 플레이어는 'P'로, 빈 공간은 '_'로 출력합니다.
플레이어의 시작 위치는 공간의 정가운데 입니다.
./ex.out <movement>로 실행하여 올바른 결과를 확인 할 수 있습니다.
(ex: ./ex.out WwdDs)*/

#include <stdio.h>
int main(void)
{   
    char move[] = "wwassdda";
    
    int x = 2;
    int y = 2;
    for(int i =0; move[i]!= '\0';i++)
    {
        char movement = move[i];
    
        if('A'<= movement && movement <='Z')
        {
            movement += 32;
        }
    
    
        switch(movement)
        {
            case 'w' : 
            if(y>=0 && y<=5)
                {
                    y -=1;
                }
                break;
            case 'a' : 
            if (x>=0 && x<=5)
                {
                    x -=1;
                }
                break;
            case 's' :
            if (y>=0 && y<=5)
                {
                    y+=1;
                }
                break;
            case 'd' :
            if (x>=0 && x<=5)
                {
                    x+=1;
                }
                break;
        }
    }

    for (int j = 0; j<5; j++)
    {
        for (int k =0; k<5; k++)
        {
            if (j == y && k == x)
            {
                printf("P");
            }
            else 
            {
                printf("_");
            }
        }
        printf("\n");
    }



    return 0;
}
