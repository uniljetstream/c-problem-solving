#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);
    
int main()
{
    int n, x, num, flag=0;
    
    scanf("%d %d", &n, &x);
    
    int* nums = (int *)malloc(n*sizeof(int));
    int* result = (int *)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++)
    {
        scanf("%d", &num);
        *(nums+i) = num;
        if(num < x) 
        {
            result[flag++] = num;
        }
    }
    
    
    for(int i=0;i<flag;i++)
    {
        printf("%d ", result[i]);
    }
    
    free(nums);
    free(result);
    
    return 0;
}