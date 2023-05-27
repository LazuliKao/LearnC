#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int a[10];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i < n; i++)
    {
        int v = a[i] - a[i - 1];
        if (i % 3 == 1)
        {
            printf("%d", v);
        }
        else
        {
            printf(" %d", v);
            if (i % 3 == 0)
                printf("\n");
        }
    }
    return 0;
}