#include <stdio.h>
#include <stdlib.h>

char** create_frame(int n) 
{
    int size = (n - 1) * 4 + 1;
    char** frame = (char**)malloc(size * sizeof(char*));

    for (int i = 0; i < size; i++) 
    {
        frame[i] = (char*)malloc(size * sizeof(char));
        for (int j = 0; j < size; j++) 
        {
            frame[i][j] = ' ';
        }
    }

    for (int layer = 1; layer <= n; layer++) 
    {
        int start = (layer - 1) * 2;
        int end = size - start - 1;

        for (int i = start; i <= end; i++) 
        {
            for (int j = start; j <= end; j++) 
            {
                if (i == start || i == end || j == start || j == end) 
                {
                    frame[i][j] = '*';
                }
            }
        }
    }

    
    frame[size / 2][size / 2] = '*';
    return frame;
}

int main(int argc, char* argv[]) 
{
    if (argc != 2) 
    {
        printf("ERROR\n");
    }

    int n = atoi(argv[1]);
    
    char** frame = create_frame(n);

    int size = (n - 1) * 4 + 1;
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++)
        {
            printf("%c", frame[i][j]);
        }
        printf("\n");
        free(frame[i]);
    }
    free(frame);

    return 0;
}
