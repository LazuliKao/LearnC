#include <stdio.h>
#include <math.h>
float f(float x)
{
    return x >= 0 ? pow(x, .5) : pow((x + 1), 2) + 2 * x + 1 / x;
}
int main(int argc, char const *argv[])
{
    float n;
    scanf("%f", &n);
    printf("f(%.2f) = %.2f", n, f(n));
    return 0;
}