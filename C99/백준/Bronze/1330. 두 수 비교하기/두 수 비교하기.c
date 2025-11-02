#include <stdio.h>

int main()
{
    int a, b;
    scanf("%5d %5d", &a, &b);
    
    if(a > b) printf(">");
    else if(a < b) printf("<");
    else printf("==");
    
}