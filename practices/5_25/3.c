#include <stdio.h>
int main(int argc, char const *argv[])
{
    int data[10][10];
    int row, column;
    scanf("%d %d", &row, &column);
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            scanf("%d", &data[i][j]);
    int sum = 0;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            if (i * j == 0 || i == row - 1 || j == column - 1)
                sum += data[i][j];
    printf("%d", sum);
    return 0;
}