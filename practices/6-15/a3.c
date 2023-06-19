#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int matrix[10][10] = {0};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            int a;
            scanf("%d", &a);
            matrix[i][j] = a;
        }
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1; j++)
        {
            if (i + j + 1 == n)
                continue;
            sum += matrix[i][j];
        }
    printf("%d", sum);
    return 0;
}