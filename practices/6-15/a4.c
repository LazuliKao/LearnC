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
        if (!started)
        {
            if (*str == '-')
            {
                sign = -1;
                started = 1;
            }
        }
        if (*str >= '0' && *str <= '9' || *str >= 'a' && *str <= 'f' || *str >= 'A' && *str <= 'F')
        {
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
}