#include <stdio.h>
int main()
{
    int a[2] = {1, 3}, *p = &a[0] + 1;
    printf("%d", *p);
    return 0;
}