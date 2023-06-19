#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
    char name[10], id[10];
    int gender;
    int age;
    double scored;
} ST;
void output(ST *d)
{
    if (d == NULL)
    {
        printf("null\n");
        return;
    }
    printf("%s,%s,%d,%d,%4.2f\n", d->name, d->id, d->gender, d->age, d->scored);
}
ST *MaxST(ST d[], int n, int k); // 查找男女生最高分的函数，由测试程序提供 略去不表

ST *InitData(int n); //<--需要完成的读入数据并转换成结构体数组的函数

int main()
{
    int n;
    scanf("%d\n", &n);
    ST *p = InitData(n);
    output(MaxST(p, n, 0));
    output(MaxST(p, n, 1));
    return 0;
}

/* 请在这里填写答案 */
ST *InitData(int n)
{
    ST *p = (ST *)malloc(n * sizeof(ST));
    for (int i = 0; i < n; i++)
    {
        ST *current = &p[i];
        scanf("%s %s %d %d %lf", current->name, current->id, &current->gender, &current->age, &current->scored);
    }
    return p;
}