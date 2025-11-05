#include <stdio.h>

int main()
{
    int n, m;
    int i, j, k;
    scanf("%3d %3d", &n, &m);
    int* bucket = (int *)malloc(n*sizeof(int));
    
    for(int l=0;l<m;l++)
    {
        scanf("%3d %3d %3d", &i, &j, &k);
        for(int q=i;q<j+1;q++)
        {
            bucket[q-1] = k;
        }
    }
    
    for(int p=0;p<n;p++)
    {
        printf("%d ", bucket[p]);
    }
    
    return 0;
}