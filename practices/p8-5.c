#include <stdio.h>
#define MAXN 20

void strmcpy(char *t, int m, char *s);
void ReadString(char s[])
{
    char *val = "happy new year";
    int i = 0;
    while (val[i] != '\0')
    {
        s[i] = val[i];
        i++;
    }
}

int main()
{
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d", &m);
    ReadString(t);
    strmcpy(t, m, s);
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
void strmcpy(char *t, int m, char *s)
{
    if (strlen(t) > MAXN)
        s = t;
    for (int i = m; i < MAXN; i++)
        s[i - m] = t[i - 1];
}