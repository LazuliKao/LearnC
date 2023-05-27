#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);
    char digits[4];
    for (int i = 0; i < 4; i++)
    {
        digits[i] = (num % 10 + 9) % 10;
        num /= 10;
    }
    printf("The encrypted number is %d%d%d%d", digits[1], digits[0], digits[3], digits[2]);
    return 0;
}
