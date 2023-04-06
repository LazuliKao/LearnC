#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    double sum = 0;
    char flag = -1;
    for (int i = 0; i < n; i++)
        sum += (float)(flag = -flag) / (i * 3 + 1);
    printf("sum = %.3lf", sum);
    return 0;
}