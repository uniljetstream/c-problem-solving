#include <stdio.h>

int main()
{
    char str[1000002];
    //입력시 들어가는 개행문자 1
    //fgets가 자동으로 넣는 널문자(\0) 1
    char* pstr = str;
    int flag = 0, count=0;
    
    fgets(str, sizeof(str), stdin);
    
    while(*pstr)
    {
        if(*pstr != ' ' && flag == 0 && *pstr != '\n')
        {
            flag = 1;
            count++;
            
        }
        else if(*pstr == ' ' && flag == 1)
        {
            flag = 0;
        }
        
        pstr++;
    }
    
    printf("%d", count);
}