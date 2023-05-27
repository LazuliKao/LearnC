#include <stdio.h>
int main(int argc, char const *argv[])
{
    char *months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "Septemper", "October", "November", "December"};
    int repeat;
    scanf("%d", &repeat);
    for (int count = 0; count < repeat; count++)
    {
        int month;
        scanf("%d", &month);
        if (month > 12 || month < 1)
            printf("Wrong input!\n");
        else
            printf("%s\n", months[month - 1]);
    }
    return 0;
}