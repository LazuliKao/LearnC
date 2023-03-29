#include <stdio.h>
#define MAXN 20

void CountOff(int n, int m, int out[]);

int main()
{
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff(n, m, out);
    for (i = 0; i < n; i++)
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}

/*
input:
11 3
output:
4 10 1 7 5 2 11 9 3 6 8
 */

// void CountOff(int n, int m, int out[])
// {
//     int a[MAXN];
//     int i = 0, j = 0, k = 0;
//     for (i = 0; i < n; i++)
//     {
//         a[i] = i + 1;
//     }
//     while (k < n)
//     {
//         if (a[i] != 0)
//         {
//             j++;
//         }
//         if (j == m)
//         {
//             out[a[i]] = k + 1;
//             a[i] = 0;
//             j = 0;
//             k++;
//         }
//         i++;
//         if (i == n)
//         {
//             i = 0;
//         }
//     }
// }
void CountOff(int n, int m, int out[])
{
    int temp[MAXN]; // 是否已经出列
    for (int i = 0; i < n; i++)
        temp[i] = 1; // 默认存在
    int current = 0, count = 0;
    for (int i = 0; current < n; i = (i + 1) % n)
        if (temp[i] && ++count == m)
        {
            count = temp[i] = 0;
            out[i] = ++current;
        }
}
