#include <stdio.h>
#include <math.h>

int search(int n);

int main()
{
    int number;

    scanf("%d", &number);
    printf("count=%d\n", search(number));

    return 0;
}

/* 你的代码将被嵌在这里 */
int search(int n)
{
    int count = 0;
    for (int i = 101; i <= n; i++)
    {
        if (sqrtf(i) == (int)sqrtf(i)) // 完全平方
        {
            // 有两位数字相同
            if (i / 100 == i % 100 / 10 || i / 100 == i % 10 || i % 100 / 10 == i % 10)
                count++;
        }
    }
    return count;
}