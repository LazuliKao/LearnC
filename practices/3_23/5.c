
#include <stdio.h>
int main()
{
    int a, b;
    char c;
    scanf("%d %c %d", &a, &c, &b);
    int result = 0;
    switch (c)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        if (b == 0)
            printf("Error0");
        else
            printf("%d", a / b);
        break;
    default:
        printf("Error1");
        break;
    }
    return 0;
}
