#include <stdio.h>

int reverse(int number);

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int reverse(int number)
{
    int result = 0;
    do
    {
        result = result * 10 + number % 10;
    } while (number /= 10);
    return result;
}