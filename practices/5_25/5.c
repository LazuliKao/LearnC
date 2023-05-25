#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int max = -99999;
    int min = 99999;
    for (int i = 0; i < n; i++)
    {
        int val;
        scanf("%d", &val);
        sum += val;
        if (val > max)
            max = val;
        if (val < min)
            min = val;
    }
    printf("average = %.2f\nmax = %d.00\nmin = %d.00", (float)sum / n, max, min);
    return 0;
}