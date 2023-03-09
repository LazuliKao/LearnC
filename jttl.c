#include <stdio.h>

int main()
{
    int heads, feet;
    scanf("%d %d", &heads, &feet);
    if ((feet - 2 * heads) % 2 == 0 && (4 * heads - feet) % 2 == 0)
    {
        int rabbits = (feet - 2 * heads) / 2;
        int chickens = heads - rabbits;
        printf("chickens = %d; rabbits = %d\n", chickens, rabbits);
    }
    else
    {
        printf("No solution!\n");
    }
    return 0;
}