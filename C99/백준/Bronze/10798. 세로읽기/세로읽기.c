#include <stdio.h>
#include <string.h>

#define LINE 5
#define WORD 15

int main(void)
{
        char arr[LINE][WORD];
        for (int i = 0; i < LINE; i++)
        {
                scanf("%s", arr[i]);
        }

        for (int i = 0; i < WORD; i++)
        {
                for (int j = 0; j < LINE; j++)
                {
                        if (strlen(arr[j]) <= i)
                        {
                                continue;
                        }
                        printf("%c", arr[j][i]);
                }
        }
        return 0;
}