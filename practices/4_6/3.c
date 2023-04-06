#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int a = 1, b = 2;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (double)b / a;
        int t = a + b;
        a = b;
        b = t;
    }
    printf("%.2f", sum);
    return 0;
}