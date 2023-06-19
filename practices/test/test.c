#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    struct stu
    {
        char name[10];
        int age;
    } a[5] = {"ZHAO",
              14,
              "WANG",
              15,
              "LIU",
              16,
              "ZHANG",
              17};
    printf("%d, %s", a[2].age, a[1].name);

    return 0;
}