// 10
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sumScount = 1;
    int n;
    scanf("%d", &n);
    for (int i = n - 1; i > 0; i--)
        sumScount = (sumScount + 1) * 2;
    printf("%d", sumScount);
    return 0;
}