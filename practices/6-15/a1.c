#include <stdio.h>
int main(int argc, char const *argv[])
{
    float n;
    scanf("%f", &n);
    printf("f(%.1f) = %.1f", n, 0 != n ? 1.0 / n : 0);
    return 0;
}