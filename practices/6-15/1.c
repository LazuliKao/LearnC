int MonthDays(int year, int month)
{
    int data[12] = {31, year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return data[month - 1];
}