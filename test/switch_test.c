#include <stdio.h>
int main()
{
    int id;
    scanf("%d", &id);
    switch (id)
    {
    case 0:
        printf("%.2f", 3.);
        break;
    case 1:
        printf("%.2f", 2.);
        break;
    case 2:
        printf("%.2f", 4.1);
        break;
    case 3:
        printf("%.2f", 10.2);
        break;
    case 4:
        printf("Exit");
        break;
    }
    return 0;
}