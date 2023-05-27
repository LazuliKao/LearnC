#include <stdio.h>
int main(int argc, char const *argv[])
{
    char data1[100];
    char data2[100];
    scanf("%s\n", data1);
    scanf("%s\n", data2);
    strcat(data1, data2);
    printf("%s\n", data1);
    return 0;
}