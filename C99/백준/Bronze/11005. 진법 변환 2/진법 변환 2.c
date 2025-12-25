#include <stdio.h>

int main()
{
        int n, b, dividend, divisor, i = 0;
        char temp[1000];
        scanf("%d %d", &n, &b);

        int j = 0;
        dividend = n;
        while (dividend != 0)
        {
                divisor = dividend % b;
                dividend /= (int)b;
                if (divisor > 9)
                {
                        // printf("%c", divisor + 55);
                        temp[j] = divisor + 55;
                        // printf("if1 ");
                }
                else
                {
                        // printf("%c\n", divisor + '0');
                        temp[j] = divisor + '0';
                        // printf("if2 ");
                }
                // printf("%d %d\n", dividend, divisor);
                j++;
        }
        temp[j] = '\0';

        for (int i = j - 1; i >= 0; i--)
        {
                printf("%c", temp[i]);
        }

        return 0;
}