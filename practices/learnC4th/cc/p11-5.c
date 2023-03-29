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

// /* 你的代码将被嵌在这里 */
// char *match(char *s, char ch1, char ch2)
// {
//     while (*s != '\0')
//     {
//         if (*s == ch1)
//         {
//             char *end = s;
//             do
//             {
//                 printf("%c", *end);
//                 end++;
//                 if (*end == '\0')
//                 {
//                     return NULL;
//                 }
//             } while (*end != ch2);
//             printf("%c\n", *end);
//             return s;
//         }
//         s++;
//     }
//     return NULL;
// }
// char *match(char *s, char ch1, char ch2)
// {
//     char *start = NULL, *end = NULL, *cur = s;
//     do
//     {
//         if (!start && *cur == ch1)
//             start = cur;
//         if (!end && *cur == ch2)
//             end = cur;
//     } while (*(++cur) != '\0');
//     if (start || end)
//     {
//         if (end && end < start)
//         {
//             return cur;
//         }
//         else if (end == start)
//         {
//             printf("%c\n", *end);
//             return start;
//         }
//         else

//         {
//             char *the_end = end ? end : cur;
//             char *the_start = start ? start : s;
//             for (char *i = the_start; i <= the_end; i++)
//             {
//                 printf("%c", *i);
//             }
//             printf("\n");
//             return the_start;
//         }
//     }
//     else
//     {
//         return cur;
//     }
// }
char *match(char *s, char ch1, char ch2)
{
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] == ch1)
        {
            for (int j = i; j < len; j++)
            {
                printf("%c", s[j]);
                if (ch2 == s[j])
                {
                    break;
                }
            }
            printf("\n");
            return s + i;
        }
    }
    printf("\n");
    return s + len;
}
