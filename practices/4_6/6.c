#include <stdio.h>
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
int main(int argc, char const *argv[])
{

    return 0;
}