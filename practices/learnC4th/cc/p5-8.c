#include <stdio.h>

void hollowPyramid(int n);

int main()
{
    int n;

    scanf("%d", &n);
    hollowPyramid(n);

    return 0;
}

/* 你的代码将被嵌在这里 */
void hollowPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%*d", n - i + 1, i);
        if (i > 1)
        {
            if (i == n)
                for (int c = 0; c < 2 * (i - 1); c++)
                    printf("%d", i);
            else
                printf("%*d", 2 * (i - 1), i);
        }
        printf("\n");
    }
}