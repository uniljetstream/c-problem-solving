#include <stdio.h>

int main()
{
    int white_paper[100][100] = {0}; // 가로세로 0~99
    int count, x, y, x_10, y_10;
    int result = 0;

    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d %d", &x, &y);
        x_10 = x + 10;
        y_10 = y + 10;
        for (int j = x; j < x_10; j++)
        {
            for (int k = y; k < y_10; k++)
            {
                white_paper[j][k] = 1;
            }
        }
    }
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (white_paper[i][j] == 1)
            {
                result++;
            }
        }
    }
    printf("%d", result);
    return 0;
}