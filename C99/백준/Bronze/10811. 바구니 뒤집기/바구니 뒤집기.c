#include <stdio.h>

int main()
{
    int n, m, i, j;
    
    scanf("%3d %3d", &n, &m);
    
    int baket[n];
    
    for(int p=0;p<n;p++)
    {
        baket[p] = p+1;    
    }
    
    for(int p=0;p<m;p++)
    {
        scanf("%3d %3d", &i, &j);
        
        for(int k=0;k<(j-i+1)/2;k++)
        {
            int temp = baket[i-1+k];
            baket[i-1+k] = baket[j-1-k];
            baket[j-1-k] = temp;
        }
       
    }
    
    for(int p=0;p<n;p++)
    {
        printf("%d ", baket[p]);
    }
}