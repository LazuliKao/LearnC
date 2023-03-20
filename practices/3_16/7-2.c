/*7-2 计算正方形周长和面积
Score 20
Author 李耀芳
Organization 天津城建大学
输入正方形的边长，计算周长和面积，并输出结果。

输入格式:
输入一个整型数据（正方形边长）

输出格式:
输出两个数据，以逗号间隔，顺序为：周长 面积*/
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d,%d", 4 * a, a * a);
    return 0;
}