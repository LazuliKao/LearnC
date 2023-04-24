#include <stdio.h>
double fibList[100] = {0};
double fib(int n)
{
    return fibList[n] != 0
               ? fibList[n]
               : (fibList[n] =
                      n <= 2
                          ? 1
                          : fib(n - 1) + fib(n - 2));
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    printf("%.0lf", fib(n));
    return 0;
}