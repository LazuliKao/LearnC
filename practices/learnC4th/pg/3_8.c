#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, n, count = 0;
    double price[5] = {0, 3.00, 2.50, 4.10, 10.20};
    printf("[1] apple\n\
[2] pear\n\
[3] orange\n\
[4] grape\n\
[0] exit\n");
    while (scanf("%d", &n) && n != 0 && count < 5)
    {
        if (n < 0 || n > 4)
            printf("price = 0.00\n");
        else
            printf("price = %.2lf\n", price[n]);
        count++;
    }
    return 0;
}
