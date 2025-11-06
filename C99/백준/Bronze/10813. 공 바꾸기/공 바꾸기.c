#include <stdio.h>
#include <stdlib.h>

void swap(int* num1, int* num2);

int main()
{
    int n, m;
    int i, j;
    
    scanf("%3d %3d", &n, &m);
    
    int* backet = (int*)malloc(n*sizeof(int));
    
    for(int p=0;p<n;p++)
    {
        backet[p]=p+1;
    }
    
    for(int p=0;p<m;p++)
    {
        scanf("%3d %3d", &i, &j);
        
        swap(&backet[i-1], &backet[j-1]);
    }
    
    for(int p=0;p<n;p++)
    {
        printf("%d ", backet[p]);
    }
    
    free(backet);
}

void swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}