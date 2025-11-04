#include <stdio.h>

int main()
{
    int a, b, c;
    
    scanf("%2d %2d", &a, &b);
    scanf("%4d", &c);
    
    b += c;
    
    if (b > 59)
    {
        a+=(b / 60);
        b %= 60;
    }
    
    if(a>23)
    {
        a %= 24;
    }
    
    printf("%d %d", a, b);
}