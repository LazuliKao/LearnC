#include "stdio.h"
#include "math.h"
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double delta = b * b - 4 * a * c;
    if (a == 0 && b == 0 && c == 0)
    {
        printf("Any Answer");
    }
    else if (a == 0 && b == 0 && c != 0)
    {
        printf("No Answer");
    }
    else if (a == 0)
    {
        double result = -b / c;
        printf("x=%.2lf", result);
    }
    else if (delta > 0)
    {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        if (x1 > x2)
        {
            double tmp = x1;
            x1 = x2;
            x2 = tmp;
        }
        printf("x1=%.2lf,x2=%.2lf", x1, x2);
    }
    else if (delta < 0)
    {
        double p1 = -b / 2 * a;
        double p2 = fabs(sqrt(-delta));
        printf("x1=%.2lf+%.2lfi,x2=%.2lf-%.2lfi", p1, p2, p1, p2);
    }
    else
    {
        double x = (-b) / (2 * a);
        printf("x1=x2=%.2lf", x);
    }
    return 0;
}