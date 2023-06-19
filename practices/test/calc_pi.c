#include <stdio.h>
#include <math.h>
int main()
{
    double pi = 0.0;
    double temp = 0;
    int flag = -1;
    int i = 0;
    do
    {
        pi += 4.0 * (temp = (flag = -flag) / (2 * i++ + 1));
    } while (temp >= .0001);
    printf("pi = %f", pi);
}
