#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    signed char sign = 1;
    char started = 0;
    char data[1000];
    char *str = data;
    scanf("%s", str);
    char bytes[1000] = {0};
    int c = 0;
    do
    {
        if (!started && *str == '-')
            sign = -1;
        if (*str >= '0' && *str <= '9' || *str >= 'a' && *str <= 'f' || *str >= 'A' && *str <= 'F')
        {
            started = 1;
            bytes[c++] = *str;
        }
    } while (*(++str) != '#');
    int num = 0;
    for (int i = 0; i < c; i++)
    {
        int n = 0;
        if (bytes[i] >= '0' && bytes[i] <= '9')
            n = bytes[i] - '0';
        else if (bytes[i] >= 'a' && bytes[i] <= 'f')
            n = bytes[i] - 'a' + 10;
        else if (bytes[i] >= 'A' && bytes[i] <= 'F')
            n = bytes[i] - 'A' + 10;
        num = num * 16 + n;
    }
    printf("%d", num * sign);
    return 0;

    // char a;
    // int flag = 1, mark = 0, sum = 0;
    // // flag来表示有没有读到第一个字符，mark来表示第一个字符是不是'-'
    // scanf("%c", &a);
    // while (a != '#')
    // {
    //     if (a >= '0' && a <= '9')
    //     {
    //         flag = 0;
    //         sum = sum * 16 + a - '0';
    //     }
    //     else if (a >= 'a' && a <= 'f')
    //     {
    //         flag = 0;
    //         sum = sum * 16 + a - 'a' + 10;
    //     }
    //     else if (a >= 'A' && a <= 'F')
    //     {
    //         flag = 0;
    //         sum = sum * 16 + a - 'A' + 10;
    //     }
    //     else if (a == '-' && flag == 1)
    //         mark = 1;
    //     scanf("%c", &a);
    // }

    // if (sum == 0)
    //     printf("0");
    // else
    // {
    //     if (mark == 1)
    //         printf("-");
    //     printf("%d\n", sum);
    // }

    // return 0;
}