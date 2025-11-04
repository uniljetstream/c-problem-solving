#include <stdio.h>

int main()
{
    int h, m;
    char buffer[6];
    
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%2d %2d", &h, &m);
    
    if(m >= 45)
        printf("%d %d", h, m-45);
    else if(m<45)
    {
        h = h - 1;
        if(h<0)
        {
            h = 23;
        }
        m = m + 60 - 45;
        printf("%d %d", h, m);
    }
}