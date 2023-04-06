#include <stdio.h>
int ftoc(int c)
{
    return (c - 32) * 5 / 9;
}
int main(int argc, char const *argv[])
{
    int fahr;
    if (scanf("%d", &fahr))
    {
        printf("Celsius = %d", ftoc(fahr));
    }
    return 0;
}