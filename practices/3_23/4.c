// 请编写程序，输入年份和月份，输出这个月的天数。
// 例如，输入1995 3，输出1995 3。

#include <stdio.h>
int main()
{
    int year, month;
    scanf("%d %d", &year, &month);
    int day = 0;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        day = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        day = 30;
        break;
    case 2:
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            day = 29;
        else
            day = 28;
        break;
    }
    printf("%d", day);
    return 0;
}