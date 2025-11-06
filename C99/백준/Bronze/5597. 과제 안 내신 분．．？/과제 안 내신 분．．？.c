#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b);

int main()
{
    int student[30];
    int num;
    
    for(int i = 0;i<30;i++)
    {
        student[i] = i+1;
    }
    
    for(int i=0;i<28;i++)
    {
        scanf("%d", &num);
        student[num-1] = 0;
    }
    
    qsort(student, 30, sizeof(int), compare);
    
    printf("%d\n", student[28]);
    printf("%d", student[29]);
    
    return 0;
}

int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}