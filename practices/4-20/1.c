#include <stdio.h>
int main(int argc, char const *argv[])
{
    float distance = 0;
    int time = 0;
    scanf("%f %d", &distance, &time);
    double fee = 10;
    if (distance <= 3)
    {
    }
    else if (distance <= 10)
        fee = 10 + (distance - 3) * 2;
    else
        fee = 10 + 14 + (distance - 10) * 3;
    fee += time / 5 * 2;
    printf("%.0lf", fee);
    return 0;
}