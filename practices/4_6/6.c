// 6
#include <stdio.h>
#include <math.h>
int narcissistic(int number)
{
    int temp = number;
    int n = 0; // 位数n
    do
        ++n;
    while (temp /= 10);
    int sum = 0;
    temp = number;
    do
        sum += pow(temp % 10, n);
    while (temp /= 10);
    return sum == number;
}
int main(int argc, char const *argv[])
{
    int number;
    scanf("%d", &number);
    if (narcissistic(number))
        printf("%d is a narcissistic number\n", number);
    else
        printf("%d is not a narcissistic number\n", number);
    return 0;
}