#include <stdio.h>

int main()
{
    int r = 10, c = 9;
    int a[r][c];
    for (int i = 0; i < r - 1; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if (j == i - 1)
            {
                a[i][j] = 0;
            }
            else
            {
                a[i][j] = 1;
            }
        }
    }

    for (int col = 0; col < c; ++col)
    {
        a[9][col] = 1;
    }

    a[4][3] = 1;
    a[4][4] = 0;
    a[5][4] = 1;
    a[5][3] = 0;

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int m = 1, n = 1;
    while (m < r && n >= 0 && n < c)
    {
        // 追加判断以避免越界
        if (n < 0 || n >= c)
        {
            break; // 结束循环
        }

        if (m == n && a[m][n] == 1)
        {
            n += 1;
            printf("a[%d][%d]==1\n", m, n);
        }
        else if (m == n && a[m][n] == 0)
        {
            n -= 1;
            printf("a[%d][%d]==0\n", m, n);
            break;
        }
        else if (m < n && a[m][n] == 1)
        {
            m += 1;
            printf("a[%d][%d]==1\n", m, n);
        }
        else
        {
            n -= 2;
            printf("a[%d][%d]==0\n", m, n);
            break;
        }
    }
    printf("key : a[%d][%d]\n", m, n);
    return 0;
}