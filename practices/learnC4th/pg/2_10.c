#include <stdio.h>
int main(int argc, char const *argv[])
{
    float n;
    scanf("%f", &n);
    printf("f(%.1f) = %.1f", n, (float)(n == 0 ? .0 : 1.0 / n));
    return 0;
}