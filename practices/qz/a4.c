#include <stdio.h>
int go(int n)
{
    static int tmp[47] = {0, 1, 2};
    if (tmp[n])
        return tmp[n];
    else
        return tmp[n] = go(n - 1) + go(n - 2);
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    printf("%d", go(n));
    return 0;
}