#include <stdio.h>
int main(int argc, char const *argv[])
{
    char a[100];
    scanf("%s", a);
    for (int j = 0; j < strlen(a); j++)
    {
        if (a[j] >= 'A' && a[j] <= 'Z')
            a[j] += 32;
        printf("%c", a[j]);
    }

    // char *cur = str;
    // do
    // {
    //     char x = *cur;
    //     if (x <= 'Z' && x >= 'A')
    //         printf("%c", *cur - 'A' + 'a');
    //     else
    //         printf("%c", *cur);
    // } while (*(cur++) != '\0');
    return 0;
}