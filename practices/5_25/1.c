#include <stdio.h>
int main(int argc, char const *argv[])
{
    char data[100], ch1, ch2;
    scanf("%s\n", data);
    scanf("%c %c", &ch1, &ch2);
    char *start = NULL, *end = NULL, *cur = data;
    do
    {
        if (!start && *cur == ch1)
            start = cur;
        if (!end && *cur == ch2)
            end = cur;
    } while (*(++cur) != '\0');
    if (start || end)
    {
        if (end && end < start)
        {
            printf("%s\n", cur);
        }
        else if (end == start)
        {
            printf("%c\n", *end);
        }
        else
        {
            while (start != end)
            {
                printf("%c", *start);
                start++;
            }
            printf("%c\n", *start);
        }
    }
}