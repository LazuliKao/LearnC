#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    PrintN(, , n);
    return 0;
}
int narcissistic(int *array, int number, int count)
{
    int temp = number, sum = 0;
    do
        sum += array[temp % 10];
    while (temp /= 10);
    return sum == number;
}
void PrintN(int m, int n, int count)
{
    int array[10] = {0};
    for (int i = 0; i < 10; i++)
        array[i] = pow(i, count);
    for (int i = (int)pow(10, n - 1); i < (int)pow(10, n); i++)
        if (narcissistic(array, i, count))
            printf("%d\n", i);
}