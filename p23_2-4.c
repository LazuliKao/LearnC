#include <stdio.h>
float FahrenheitToCentigrade(float f)
{
    return (f - 32) * 5 / 9;
}
int main()
{
    float f = 150;
    float c = FahrenheitToCentigrade(f);
    printf("%f => %f", f, c);
    return 0;
}