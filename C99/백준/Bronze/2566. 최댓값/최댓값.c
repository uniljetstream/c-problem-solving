#include <limits.h>
#include <stdio.h>

int main(void)
{
        int max = INT_MIN, x = 0, y = 0, num;
        for (int i = 0; i < 9; i++)
        {
                for (int j = 0; j < 9; j++)
                {
                        scanf("%d", &num);
                        if (num > max)
                        {
                                max = num;
                                x = i + 1;
                                y = j + 1;
                        }
                }
        }
        printf("%d\n", max);
        printf("%d %d", x, y);
}