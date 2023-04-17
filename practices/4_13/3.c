#include <stdio.h>
int getdays(int y, int m, int d);
int main(void)
{
    int y, m, d, days;
    scanf("%d%d%d", &y, &m, &d);
    days = getdays(y, m, d);
    printf("days=%d\n", days);
    return 0;
}
/* 请在这里填写答案 */
int getdaysOfYear(int y)
{
    int days = 0;
    int month[12] = {31, ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < 12; i++)
        days += month[i];
    return days;
}
int getdays(int y, int m, int d)
{
    int days = 0;
    int month[12] = {31, ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < m - 1; i++)
        days += month[i];
    days += d;
    for (int i = 1; i < y; i++)
        days += getdaysOfYear(i);
    return days;
}