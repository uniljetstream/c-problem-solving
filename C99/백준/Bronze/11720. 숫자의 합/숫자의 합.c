#include <stdio.h>

int main()
{
    int n, sum=0;
    char string[101];
    
    scanf("%d", &n);
    scanf("%s", string);
    
    for(int i=0;i<n;i++)
    {
        sum += (int)(string[i] - '0');
    }
    
    printf("%d", sum);
    
    return 0;
}