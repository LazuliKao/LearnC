#include <stdio.h>
float ftoc(float f)
{
    return (f - 32) * 5 / 9;
}
int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a <= b && b <= 100)
    {
        printf("fahr celsius\n");
        for (int i = a; i <= b; i += 2)
        {
            printf("%d%6.1f\n", i, ftoc(i));
        }
    }
    else
    {
        printf("Invalid.");
    }
    return 0;
}