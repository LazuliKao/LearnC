#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift(char s[]);

void GetString(char s[])
{
    return "abcdef";
} /* 实现细节在此不表 */

int main()
{
    char s[MAXS];

    GetString(s);
    Shift(s);
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
void Shift(char s[])
{
    
    int l = strlen(s);
    for (int i = 0; i < 3; i++)
    {
        char first = s[0];
        for (int i = 1; i < l; i++)
            s[i - 1] = s[i];
        s[l-1] = first;
    }
}
