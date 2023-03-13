#include <stdio.h>
#include <math.h>

double funcos(double e, double x);

int main()
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

/* 你的代码将被嵌在这里 */
// double funcos(double e, double x)
// {
//     char sign = -1;
//     double temp, m = 2, sum = 1, factorial;
//     do
//     {
//         factorial = 1;
//         for (int i = 1; i <= m; i++)
//             factorial *= i;
//         temp = pow(x, m) / factorial;
//         sum += sign * temp;
//         m += 2;
//         sign = -sign;
//     } while (temp > e);
//     return sum;
// }

// 精度高，不可直接计算阶乘
// double funcos(double e, double x)
// {
//     double result = 0;
//     int i = 0;
//     double temp = 0;
//     int factorial = 1;
//     do
//     {
//         temp = pow(-1, i) * pow(x, 2 * i) / factorial;
//         result += temp;
//         i++;
//         factorial *= i * 2 - 1;
//         factorial *= i * 2;
//     } while (fabs(temp) >= e);
//     return result;
// }
// 精度高，不可直接计算阶乘
double funcos(double e, double x)
{
    double result = 0, temp = 0, x_pow = 1, factorial = 1;
    int i = 0;
    char sign = -1;
    do
    {
        result += (sign = -sign) * (temp = x_pow / factorial);
        x_pow *= x * x;
        i += 2;
        factorial *= i * (i - 1);
    } while (temp >= e);
    return result;
}
// //精度高，不可直接计算阶乘
// //Time Limit Exceeded 0

// int factorial(int v)//计算阶乘
// {
//     int result = 1;
//     for (int i = 1; i <= v; i++)
//         result *= i;
//     return result;
// }
// double funcos(double e, double x)
// {
//     double result = 0;
//     int i = 0;
//     double temp = 0;
//     do
//     {
//         temp = pow(-1, i) * pow(x, 2 * i) / factorial(2 * i);//公式
//         result += temp;
//         i++;
//     } while (fabs(temp) >= e);
//     return result;
// }
