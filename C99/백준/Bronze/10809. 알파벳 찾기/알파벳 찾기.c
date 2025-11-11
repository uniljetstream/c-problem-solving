#include <stdio.h>
#include <string.h>

int main()
{
    int alphabet[26];
    char word[101];
    
    scanf("%s", word);
    
    for(int i=0;i<26;i++)
    {
        alphabet[i] = -1;
    }
    
    for(int i=0;i<strlen(word);i++)
    {
        if(alphabet[word[i]-'a'] == -1) alphabet[word[i]-'a'] = i;
    }
    
    for(int i=0;i<26;i++)
    {
        printf("%d ", alphabet[i]);
    }
    
    return 0;
}