#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int cent1, cent2, cent5;
    int sum = 0;
    for (cent1 = 0; cent1 <= n; cent1++)
    {
        for (cent2 = 0; cent2 <= n / 2; cent2++)
        {
            for (cent5 = 0; cent5 <= n / 5; cent5++)
            {
                if (cent1 + cent2 * 2 + cent5 * 5 == n)
                {
                    sum++;
                }
            }
        }
    }
    printf("%d", sum);
    return 0;
}