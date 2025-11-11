#include <stdio.h>
#include <string.h>

int main()
{
    int t, string_size;
    char string[1000], startWord, endWord;
    
    scanf("%2d", &t);
    for(int i=0;i<t;i++)
    {
        scanf("%s", string);
        startWord = string[0];
        string_size=strlen(string)-1;
        endWord = string[string_size];
        printf("%c%c\n", startWord, endWord);
    }
}