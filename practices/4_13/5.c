
#include <stdio.h>

int IsAutomorphic(int x);
void FindAutomorphic(int lower, int upper);

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    FindAutomorphic(a, b);
    return 0;
}

/* 请在这里填写答案 */
int IsAutomorphic(int x)
{
    if (x == 0 || x == 1)
        return 1;
    int sum = (x * x) - x;
    do
    {
        if (sum % 10)
            return 0;
        sum /= 10;
    } while (x /= 10);
    return 1;
}
void FindAutomorphic(int lower, int upper)
{
    int count = 0;
    for (int i = lower; i <= upper; i++)
    {
        if (IsAutomorphic(i))
        {
            count++;
            printf("%d\n", i);
        }
    }
    if (!count)
        printf("None");
}
