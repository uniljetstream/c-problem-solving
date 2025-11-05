#include <stdio.h>
#include <limits.h>

int main()
{
    int num, max_cnt=0, max_val = INT_MIN;
    
    for(int i=0;i<9;i++)
    {
        scanf("%2d", &num);
        if(max_val < num)
        {
            max_cnt = (i+1);
            max_val = num;
        }
    }
    
    printf("%d\n", max_val);
    printf("%d", max_cnt);
    return 0;
}