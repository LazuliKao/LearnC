#include <stdio.h>

int main()
{
    int heads, feet;
    scanf("%d %d", &heads, &feet);
    if ((feet - 2 * heads) % 2 == 0 && (4 * heads - feet) % 2 == 0)
    {
        int rabbits = (feet - 2 * heads) / 2;
        int chickens = heads - rabbits;
        printf("%d %d", chickens, rabbits);
    }
    else
    {
        printf("No solution!");
    }
    return 0;
}