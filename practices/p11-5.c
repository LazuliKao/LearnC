#include <stdio.h>

#define MAXS 10

char *match(char *s, char ch1, char ch2);

int main()
{
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

/* 你的代码将被嵌在这里 */
char *match(char *s, char ch1, char ch2)
{
    while (*s != '\0')
    {
        if (*s == ch1)
        {
            char *end = s;
            do
            {
                printf("%c", *end);
                end++;
            } while (*end != ch2);
            printf("%c\n", *end);
            return s;
        }
        s++;
    }
    return NULL;
}
