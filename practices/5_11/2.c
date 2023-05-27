#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, n;
    scanf("%d %d", &n, &x);
    int a[20];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    char finded = 0;
    for (int i = 0; i < n; i++)
        if (finded = a[i] == x)
        {
            printf("%d", i );
            break;
        }
    if (!finded)
        printf("Not Found");
    return 0;
}