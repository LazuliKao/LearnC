#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, n;
    scanf("%d%d", &a, &n);
    int sum = 0;
    int tmp = a;
    for (int i = 0; i < n; i++)
    {
        sum += tmp;
        tmp = tmp * 10 + a;
    }
    printf("%d", sum);
    return 0;
}