#include <stdio.h>
double Fen2(int x);
int main()
{
    int a;
    double b;

    scanf("%d", &a);
    b = Fen2(a);
    printf("%.2f", b);

    return 0;
}
/* 请在这里填写答案 */
double Fen2(int x)
{
    if (x > 0)
    {
        return (double)x / 2 + 1;
    }
    else if (x == 0)
    {
        return 1;
    }
    else
    {
        return -2 * x - 1;
    }
}