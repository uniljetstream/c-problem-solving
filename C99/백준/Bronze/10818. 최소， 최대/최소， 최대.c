#include <stdio.h>
#include <limits.h>

int main()
{
    int n, min = INT_MAX, max = INT_MIN, x;
    scanf("%7d", &n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%8d", &x);
        if(x<min) min = x;
        if(x>max) max = x;
    }
    
    printf("%d %d", min, max);
    
    return 0;
}