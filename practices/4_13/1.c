#include <stdio.h>
#include <math.h>

double TriangleArea(double a, double b, double c);

int main()
{
    double a, b, c, d, e, f, g, s;
    scanf("%lg %lg %lg %lg %lg %lg %lg", &a, &b, &c, &d, &e, &f, &g);

    s = TriangleArea(a, e, f) +
        TriangleArea(b, g, f) +
        TriangleArea(c, d, g);

    printf("%g\n", s);
    return 0;
}
double TriangleArea(double side1, double side2, double side3)
{
    double p = (side1 + side2 + side3) / 2;
    return sqrt(p * (p - side1) * (p - side2) * (p - side3));
}
