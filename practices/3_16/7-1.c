/*
7-1 与圆相关的计算
Score 20
Author 于延
Organization 哈尔滨师范大学
任务描述
给出圆的半径，求圆的直径、周长和面积。

输入格式:
输入包含一个实数r（0 < r <= 10,000），表示圆的半径。

输出格式:
输出一行，包含三个数，分别表示圆的直径、周长、面积，数与数之间以一个空格分开，*/
#include <stdio.h>
int main()
{
    const double pi = 3.14159;
    double r;
    scanf("%lf", &r);
    printf("%.4f %.4f %.4f", 2 * r, 2 * r * pi, r * r * pi);
    return 0;
}