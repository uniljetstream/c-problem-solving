#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
        char n[100];
        int b, result[100], sum = 0;
        scanf("%s %d", n, &b);

        for (int i = 0; i < strlen(n); i++)
        {
                if (isalpha(n[i]))
                {
                        result[i] = n[i] - 'A' + 10;
                }
                else
                {
                        result[i] = n[i] - '0';
                }
        }

        for (int i = 0; i < strlen(n); i++)
        {
                sum += result[i] * pow(b, strlen(n) - i - 1);
        }

        printf("%d", sum);
        return 0;
}
