#include <stdio.h>

int main()
{
    int a, b;
    char buffer[10];
    
    while(1)
    {
        if(fgets(buffer, sizeof(buffer), stdin) == NULL) return 0;
        sscanf(buffer, "%d %d", &a, &b);
        printf("%d\n", a+b);
    }
}