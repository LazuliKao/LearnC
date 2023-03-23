#include <stdio.h>

double fn(double x, int n);

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.2f\n", fn(x, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
#include <math.h>
double fn(double x, int n)
{
    if (n == 1)
        return x;
    return fn(x, n - 1) + (n % 2 ? 1 : -1) * pow(x, n);
}