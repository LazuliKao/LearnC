// #include "stdio.h"
// int main()
// {
//     int count;
//     scanf("%d", &count);
//     float max = 0;
//     float min = 100;
//     float sum = 0;
//     for (int i = 0; i < count; i++)
//     {
//         float current = 0;
//         scanf("%f", &current);
//         if (current > max)
//             max = current;
//         if (current < min)
//             min = current;
//         sum += current;
//     }
//     printf("%.1f %.1f %.1f", max, min, sum / count);
//     return 0;
// }
#include "stdio.h"
int main()
{
    int count;
    scanf("%d", &count);
    float max = 0;
    float min = 100;
    float sum = 0;
    for (int i = 0; i < count; i++)
    {
        float current = 0;
        scanf("%f", &current);
        if (current > max)
            max = current;
        if (current < min)
            min = current;
        sum += current;
    }
    printf("%.1f %.1f %.1f", max, min, sum / count);
    return 0;
}