#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num1[4], num2[4];
    scanf("%s", num1);
    scanf("%s", num2);
    
    printf("%d\n", (num2[2]-'0')*atoi(num1));
    printf("%d\n", (num2[1]-'0')*atoi(num1));
    printf("%d\n", (num2[0]-'0')*atoi(num1));
    printf("%d\n", atoi(num2)*atoi(num1));
}