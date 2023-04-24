#include <stdio.h>
double Fact(int n)
{
    int i;
    double result = 1;
    for (i = 2; i <= n; i++)
        result *= i;
    return result;
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2)
        printf("%d! = %.0lf\n", i, Fact(i));
    return 0;
}