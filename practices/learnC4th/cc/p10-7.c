#include <stdio.h>

void dectobin(int n);

int main()
{
    int n;

    scanf("%d", &n);
    dectobin(n);

    return 0;
}
void sub(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        sub(n / 2);
        printf("%d", n % 2);
    }
}
void dectobin(int n)
{
    if (n == 0)
    {
        printf("0");
    }
    else
    {
        sub(n);
    }
}