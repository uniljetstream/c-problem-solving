#include <stdio.h>
#include <string.h>

int main()
{
    char word[101];
    int count = 0;
    scanf("%s", word);

    char *pword = word;

    while (*pword)
    {
        if (!strncmp(pword, "c=", 2) || !strncmp(pword, "c-", 2))
        {
            count++;
            pword++;
        }
        else if (!strncmp(pword, "dz=", 3))
        {
            count++;
            pword += 2;
        }
        else if (!strncmp(pword, "d-", 2))
        {
            count++;
            pword++;
        }
        else if (!strncmp(pword, "lj", 2))
        {
            count++;
            pword++;
        }
        else if (!strncmp(pword, "nj", 2))
        {
            count++;
            pword++;
        }
        else if (!strncmp(pword, "s=", 2))
        {
            count++;
            pword++;
        }
        else if (!strncmp(pword, "z=", 2))
        {
            count++;
            pword++;
        }
        else
        {
            count++;
        }
        pword++;
    }
    printf("%d", count);
}