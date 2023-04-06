// 5
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int cent1, cent2, cent5;
    int sum = 0;
    for (cent1 = 1; cent1 <= n; cent1++)
        for (cent2 = 1; cent2 <= n / 2; cent2++)
            for (cent5 = 1; cent5 <= n / 5; cent5++)
                if (cent1 + cent2 * 2 + cent5 * 5 == n)
                {
                    printf("1:%d 2:%d 5:%d\n", cent1, cent2, cent5);
                    sum++;
                }
    printf("%d", sum);
    return 0;
}