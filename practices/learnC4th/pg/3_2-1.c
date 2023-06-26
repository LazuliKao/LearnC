#include <stdio.h>
int main(int argc, char const *argv[])
{
    int speed, limit;
    scanf("%d%d", &speed, &limit);
    if (speed < limit * 1.1f)
        printf("OK");
    else
    {
        float percent = (float)(speed - limit) * 100 / limit;
        if (speed < limit * 1.5f)
            printf("Exceed %.0f%%. Ticket 200", percent);
        else
            printf("Exceed %.0f%%. License Revoked", percent);
    }
    return 0;
}