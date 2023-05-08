#include <stdio.h>
int Zhe(int x);
int main()
{
    int a, b;

    scanf("%d", &a);
    b = Zhe(a);
    printf("%d", b);

    return 0;
}
/* 请在这里填写答案 */
int Zhe(int x)
{
    if (x >= 300)
        return x - 100;
    else if (x >= 200)
        return x - 80;
    else
        return x;
}