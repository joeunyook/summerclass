/*Q02
assignment_ex_02.out 과 같은 프로그램을 작성하세요.
실행은 ./assignment_ex_02.out <num> 과 같이 합니다.*/


char** make_frame(int n)
{
    int size = 4*(n-1)+1; /*17*/
    char* frame;
    for (int i =0; i<size; i++)

    {
        
        frame =(char*)malloc(size*1 + 1)
        for(int j=0; j<size; j++)
        {
            frame[i][j] = ' ';
        }

        for(int inner = ; inner<= n; layer++)
        {
            int start = inner 
        }


        frame[size/2][size/2]
    }
    return frame;
}





int main(int arc, char** argv[])

{
    if(argc != 2)
    {
        printf("wrong arg\n");
        return ERR;
    }
    int n = argv[1]-'0';
    char** frame = make_frame(n);



    free(frame);

}