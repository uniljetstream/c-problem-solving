#include <stdio.h>

int main()
{
    char word[101];
    char* pword = &word;
    int num=0;
    
    scanf("%s", word);
    
    while(*pword)
    {
        *pword++;
        num++;
    }
    
    printf("%d", num);
}