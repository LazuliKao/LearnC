#include <stdio.h>
int main(int argc, char const *argv[])
{
    int speed, limit;
    scanf("%d%d", &speed, &limit);
    if (speed <= limit)
        printf("OK");
    else
    {
        float percent = (float)(speed - limit) * 100 / limit;
        if (speed <= limit * 1.1)
            printf("Exceed %.1f%%. Ticket 200", percent);
        else if (speed <= limit * 1.5)
            printf("Exceed %.1f%%. Ticket 500", percent);
        else
            printf("Exceed %.1f%%. License Revoked", percent);
    }
    return 0;
}