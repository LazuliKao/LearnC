#include <stdio.h>

int narcissistic(int number);
void PrintN(int m, int n);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if (narcissistic(m))
        printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if (narcissistic(n))
        printf("%d is a narcissistic number\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
#include <math.h>
int narcissistic(int number)
{
    int temp = number;
    int count = 0;
    do
        ++count;
    while (temp /= 10);
    int sum = 0;
    temp = number;
    do
        sum += pow(temp % 10, count);
    while (temp /= 10);
    return sum == number;
}
void PrintN(int m, int n)
{
    for (int i = m + 1; i < n; i++)
        if (narcissistic(i) == 0)
            printf("%d\n", i);
}