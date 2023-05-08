#include <stdio.h>
int main(int argc, char const *argv[])
{
    char c;
    int count = 0;
    while ((c = getchar()) != '#')
        count += c == ' ';
    printf("%d", count);
    return 0;
}