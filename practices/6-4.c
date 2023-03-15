#include <stdio.h>

int fib(int n);
void PrintFN(int m, int n);

int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
// int fib(int n)
// {
//     if (n == 1 || n == 2)
//         return 1;
//     else
//         return fib(n - 1) + fib(n - 2);
// }
int fib(int n)
{
    int i, t, a = 0, b = 1;
    for (i = 1; i <= n; i++)
    {
        t = a + b;
        a = b;
        b = t;
    }
    return a;
}
void PrintFN(int m, int n)
{
    int flag = 1;
    int i = 1;
    int temp = 0;
    do
    {
        temp = fib(i);
        if (temp >= m && temp <= n)
        {
            if (!flag)
                printf(" ");
            printf("%d", temp);
            flag = 0;
        }
        i++;
    } while (temp <= n);
    if (flag)
        printf("No Fibonacci number");
}
