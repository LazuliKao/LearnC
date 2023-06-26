#include <stdio.h>
struct Person
{
    char name[11];
    int birthday;
    char phone[18];
} data[10];
int main(int argc, char const *argv[])
{
    /*
    习题9-5 通讯录排序
输入n个朋友的信息，包括姓名、生日、电话号码，本题要求编写程序，按照年龄从大到小的顺序依次输出通讯录。题目保证所有人的生日均不相同。

输入格式:
输入第一行给出正整数n（<10）。随后n行，每行按照“姓名 生日 电话号码”的格式给出一位朋友的信息，其中“姓名”是长度不超过10的英文字母组成的字符串，“生日”是yyyymmdd格式的日期，“电话号码”是不超过17位的数字及+、-组成的字符串。

输出格式:
按照年龄从大到小输出朋友的信息，格式同输出。

输入样例:
3
zhang 19850403 13912345678
wang 19821020 +86-0571-88018448
qian 19840619 13609876543
输出样例:
wang 19821020 +86-0571-88018448
qian 19840619 13609876543
zhang 19850403 13912345678*/
    int count;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%s %d %s", data[i].name, &data[i].birthday, data[i].phone);
    }
    // sort by birthday
    for (int i = 0; i < count - 1; i++)
    {
        int max = i;
        for (int j = i + 1; j < count; j++)
            if (data[j].birthday < data[max].birthday)
                max = j;
        if (max != i)
        {
            struct Person tmp = data[max];
            data[max] = data[i];
            data[i] = tmp;
        }
    }
    for (int i = 0; i < count; i++)
    {
        printf("%s %d %s\n", data[i].name, data[i].birthday, data[i].phone);
    }

    return 0;
}