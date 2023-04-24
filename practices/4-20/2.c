#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, sum = 0, temp = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        sum += temp *= i;
    printf("%d", sum);
    return 0;
}