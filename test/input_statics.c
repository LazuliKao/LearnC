#include <stdio.h>
int main()
{
    int countNewLine = 0, countSpace = 0, countAlpha = 0, countNumber = 0, countOther = 0;
    for (int i = 0; i < 10; i++)
    {
        char c = getchar();
        if (c <= 'z' && c >= 'a')
            countAlpha++;
        else if (c <= 'Z' && c >= 'A')
            countAlpha++;
        else if (c <= '9' && c >= '0')
            countNumber++;
        else if (c == ' ')
            countSpace++;
        else if (c == '\n')
            countNewLine++;
        else
            countOther++;
    }
    printf("countAlpha : %d\n", countAlpha);
    printf("countNumber : %d\n", countNumber);
    printf("countSpace : %d\n", countSpace);
    printf("countNewLine : %d\n", countNewLine);
    printf("countOther : %d\n", countOther);
    return 0;
}