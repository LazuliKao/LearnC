#include <stdio.h>
int main()
{
    int i = 1;
    int v = (i++) * (i++);
    printf("%d", v);
}