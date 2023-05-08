#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    scanf("%d", &x);
    char week[7][10] = {"Sunday",
                        "Monday", "Tuesday", "Wednesday",
                        "Thursday", "Friday", "Saturday"};
    if (x < 0 || x > 6)
        printf("None");
    else
        printf("%s", week[x]);
    return 0;
}