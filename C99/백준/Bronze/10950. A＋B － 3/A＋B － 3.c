#include <stdio.h>

int main()
{
    int t, a, b;
    scanf("%d", &t);
    
    int i = 0;
    while(i<t)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
        i++;
    }
    
    return 0;
}