#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, sum = 0;
    scanf("%d", &x);
    do
    {
        sum += x % 10;
    } while (x /= 10);
    printf("%d", sum);
    return 0;
}