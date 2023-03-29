#include <stdio.h>
char *match(char *s, char ch);

int main(void)
{
    char ch, str[80], *p = NULL;

    scanf("%s", str);
    getchar();          /* 跳过输入字符串和输入字符之间的分隔符 */
    ch = getchar();     /* 输入一个字符 */
    p = match(str, ch); /* 调用函数match() */
    if (p != NULL)
    { /* 找到字符ch */
        printf("%s\n", p);
    }
    else
    {
        printf("Not Found.\n");
    }

    return 0;
}

/* 请在这里填写答案 */
char *match(char *s, char ch)
{
    char *result = NULL;
    while (*s != '\0')
    {
        if (*s == ch)
            result = s;
        s++;
    }
    return result;
}