
/*Q00
지난 시간 만들었던 문자열에 관한 함수들 (get_len(), is_equal(), copy())를 [] 연산자 없이 작성하세요.*/

//get_len

#include <stdio.h>

size_t get_len(const char *str)
{
    size_t len = 0;
    while(*str != '\0')
    {
        len++;
        str++;
    }
    return len;
}

int main(void)
{
    const char *str1 = "how long is this";
    printf("%lu\n", get_len(str1));
    return 0;
}


// is_equal
#include <stdio.h>

int is_equal(const char *str1, const char *str2)
{
    while(*str1 != '\0' && *str2 != '\0')
    {
        if(*str1!=*str2)
        {
            return 0;
        }
        str1++;
        str2++;
        
    }
    if(*str1==*str2)
    {
        return 1;
    }
    
}

int main(void)
{
    char *str1= "coding is fun";
    char *str2= "coding is fun ";
    printf("%d\n", is_equal(str1, str2));
    return 0;
}













//copy()

#include <stdio.h>

void copy(char *dst, const char *src) 
{ 
    while(*src != '\0')
    {
        *dst = *src;
        src++;
        dst++;
    }
    *dst = '\0';
    
}

int main(void)
{
    char *src = "Almost done";
    char *dst = NULL;
    copy (dst, src);
    printf("%s\n", dst);
    return 0;
}











