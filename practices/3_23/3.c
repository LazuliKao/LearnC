#include <stdio.h>
int main()
{
    double distance;
    int wait_time;
    scanf("%lf %d", &distance, &wait_time);
    double fee = 10;
    if (distance <= 3)
    { // do nothing
    }
    else if (distance <= 10)
        fee = 10 + (distance - 3) * 2;
    else
        fee = 24 + (distance - 10) * 3;
    fee += wait_time / 5 * 2;
    printf("%.0lf", fee);
    return 0;
}