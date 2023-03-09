#include <stdio.h>
int main()
{
    float x;
    printf("输入一个x: ");
    scanf("%f", &x);
    float result = 0;
    if (x == 0)
        result = 0;
    else
    {
        result = 1 / x;
    }
    // 保留一位小数
    printf("y = %.1f", result);
}