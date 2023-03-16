#include "stdio.h"
int main()
{
    float input;
    scanf("%f", &input);
    printf("%.2fKG", (input * 100 - 80) * .7f);
    return 0;
}