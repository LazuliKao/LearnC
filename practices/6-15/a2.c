#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    double num;
    for (int i = 0; i < n; i++)
    {
        num += sqrt(i + 1);
    }
    printf("sum = %.2f", num);
    return 0;
}