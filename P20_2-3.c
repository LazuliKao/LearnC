#include <stdio.h>
int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i; j++)
            printf(" ");
        for (int k = 0; k < 4 - i; k++)
            printf(" *");
        printf("\r\n");
    }
    return 0;
}