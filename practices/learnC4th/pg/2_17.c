#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
        printf("pow(3,%d) = %d\n", i, (int)pow(3, i));
    return 0;
}