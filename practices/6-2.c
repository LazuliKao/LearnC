#include <stdio.h>

int fn(int a, int n);
int SumA(int a, int n);

int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a, n));
    printf("s = %d\n", SumA(a, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int fn(int a, int n)
{
    int result = a;
    for (int i = 0; i < n - 1; i++)
    {
        result *= 10;
        result += a;
    }
    return result;
}
int SumA(int a, int n)
{
    if (n == 1)
        return a;
    else
        return fn(a, n) + SumA(a, n - 1);
}
