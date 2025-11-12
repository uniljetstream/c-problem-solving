#include <stdio.h>

int dial(char word);

int main()
{
    char word[15];
    char* pword = &word;
    int sum=0;
    scanf("%s", word);
 
    while(*pword)
    {
        sum += dial(*pword++);
    }
    
    printf("%d", sum);
    
    return 0;
}

int dial(char word)
{
    int second;
    if(word < 'D') second = 1;
    else if(word < 'G') second = 2;
    else if(word < 'J') second = 3;
    else if(word < 'M') second = 4;
    else if(word < 'P') second = 5;
    else if(word < 'T') second = 6;
    else if(word < 'W') second = 7;
    else second = 8;
    
    return (second + 2);
}

