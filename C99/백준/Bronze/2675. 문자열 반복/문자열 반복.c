#include <stdio.h>

int main()
{
    int t, r;
    char s[21];
    
    scanf("%4d", &t);
    
    for(int i=0;i<t;i++)
    {
        scanf("%d %s", &r, s);
        
        char* ps = s;
        while(*ps)
        {
            for(int i=0;i<r;i++)
            {
                printf("%c", *ps);
            }
            ps++;
        }
        printf("\n");
    }
}