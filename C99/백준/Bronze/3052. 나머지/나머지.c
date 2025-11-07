#include <stdio.h>

int testArr(int* nums, int num);

int main()
{
    int nums[10], num, i, count, index=0;
    
    for(i=0;i<10;i++)
    {
        nums[i] = -1;
    }
    
    for(i=0;i<10;i++)
    {
        scanf("%d", &num);
        
        //배열에 num%42가 없으면, 
        if(testArr(&nums, num%42))
        {
            nums[index] = (num%42);
            index++;
        }
    }
    
    printf("%d", index);
}

int testArr(int* nums, int num)
{
    for(int i=0;i<sizeof(nums);i++)
    {
        if(nums[i]==num) return 0;
    }
    return 1;
}