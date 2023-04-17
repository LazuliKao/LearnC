#include <stdio.h>
int main(int argc, char const *argv[])
{
    int speed, limit;
    scanf("%d%d", &speed, &limit);
    if (speed <= limit)
        printf("OK");
    else if (speed <= limit * 1.1)
        printf("Exceed 10%%. Ticket 200", limit);
    else if (speed <= limit * 1.5)
        printf("Exceed %d. Ticket 500", limit);
    else
        printf("Exceed %d. License Revoked", limit);
    return 0;
}