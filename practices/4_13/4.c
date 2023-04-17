#include <stdio.h>
int armstrong(int x);

int main()
{
    int m, n, i, num = 0;
    ;
    scanf("%d%d", &m, &n);
    for (i = m; i <= n; i++)
    {
        if (armstrong(i))
        {
            num++;
            printf("%d ", i);
            if (num % 10 == 0)
                printf("\n");
        }
    }
    return 0;
}

/* 请在这里填写答案 */

static int array[10] = {0};
static int lastN = -1;
int narcissistic(int number, int count)
{
    int temp = number, sum = 0;
    do
        sum += array[temp % 10];
    while (temp /= 10);
    return sum == number;
}
int armstrong(int x)
{
    int temp = x;
    int N = 0;
    do
        N++;
    while (temp /= 10);
    if (lastN != N)
    {
        for (int i = 0; i < 10; i++)
            array[i] = pow(i, N);
        lastN = N;
    }
    return narcissistic(x, N);
}