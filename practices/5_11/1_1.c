#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 输入在第一行先给出非负整数N（<10）；第二行给出N个从小到大排好顺序的整数；第三行给出一个整数X。

    // 输出格式：
    // 在一行内输出将X插入后仍然从小到大有序的整数序列，每个数字后面有一个空格。

    // 输入样例：
    // 5
    // 1 2 4 5 7
    // 3
    // 输出样例：
    // 1 2 3 4 5 7
    int count, x;
    scanf("%d", &count);
    int a[10];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    int i;
    for (i = 0; i < count; i++)
    {
        if (a[i] > x)
        {
            break;
        }
    }
    for (int j = count; j > i; j--)
    {
        a[j] = a[j - 1];
    }
    a[i] = x;
    for (int i = 0; i < count + 1; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}