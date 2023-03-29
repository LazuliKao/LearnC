#include <stdio.h>
#define MAXS 30

char *search(char *s, char *t);
void ReadString(char s[]); /* 裁判提供，细节不表 */

int main()
{
    char s[MAXS], t[MAXS], *pos;

    ReadString(s);
    ReadString(t);
    pos = search(s, t);
    if (pos != NULL)
        printf("%d\n", pos - s);
    else
        printf("-1\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
// char *search(char *s, char *t)
// {
//      for (int i = 0; i < strlen(s) - strlen(t); i++)
//     {
//         for (int j = 0; j < strlen(t); j++)
//         {
//             strcmp(s[i + j], t[j]);
//         }
//     }
//     return strstr(s, t);
// }
char *search(char *s, char *t)
{
    return strstr(s, t);
}
