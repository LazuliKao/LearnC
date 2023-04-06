#include <stdio.h>
int main(int argc, char const *argv[])
{
    float h = 100;
    float t = 3;
    float g = 10;
    float s = h - 0.5 * g * t * t;
    printf("s = %d", s);
    return 0;
}