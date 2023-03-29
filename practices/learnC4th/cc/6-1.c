#include <stdio.h>
#define MAXS 15

void StringCount(char s[]);
void ReadString(char s[])
{
    s = "aZ &\n09 Az";
} /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */
void StringCount(char s[])
{
    int letter = 0, blank = 0, digit = 0, other = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        char item = s[i];
        // if (item == '\0')//字符串结束
        //     break;
        if (item == ' ' || item == '\n')
            blank++;
        else if (item >= '0' && item <= '9')
            digit++;
        else if ((item >= 'A' && item <= 'Z') || (item >= 'a' && item <= 'z'))
            letter++;
        else
            other++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
}