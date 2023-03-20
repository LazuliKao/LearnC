#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum
{
    false,
    true
} bool;

bool palindrome(char *s);

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if (palindrome(s) == true)
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
bool palindrome(char *s)
{
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++)
        if (s[i] != s[len - i - 1])
            return false;
    return true;
}