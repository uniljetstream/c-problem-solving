#include <stdio.h>

int main()
{
    int n, v, count=0;
    
    scanf("%d", &n);
    
    int nums[n];
    
    for(int i=0;i<n;i++)
        scanf("%d", &nums[i]);
    
    scanf("%d", &v);
    
    for(int i=0;i<n;i++)
    {
        if(nums[i] == v)
        {
            count++;
        }
    }
    printf("%d", count);
}