#include <stdio.h>

int main()
{
    int order;
    printf("[1] apple\n\
[2] pear\n\
[3] orange\n\
[4] grape\n\
[0] exit\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &order);
        double val = 0;
        switch (order)
        {
        case 0:
            return 0;
        case 1:
            val = 3.0;
            break;
        case 2:
            val = 2.5;
            break;
        case 3:
            val = 4.1;
            break;
        case 4:
            val = 10.2;
            break;
        default:
            val = 0;
            break;
        }
        printf("price = %.2f\n", val);
    }
    return 0;
}