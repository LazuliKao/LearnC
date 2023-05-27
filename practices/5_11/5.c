#include <stdio.h>
int main(int argc, char const *argv[])
{
    int countOfDigit[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &countOfDigit[i]);
    }
    int startNum = 1;
    while (countOfDigit[startNum] == 0)
    {
        startNum++;
    }
    printf("%d", startNum);
    countOfDigit[startNum]--;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < countOfDigit[i]; j++)
        {
            printf("%d", i);
        }
    }
    return 0;
}