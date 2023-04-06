#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    double sum = 0;
    for (int i = 1; i <= n; i++)
        sum += 1.0 / i;
    printf("sum = %.6lf", sum);
    return 0;
}