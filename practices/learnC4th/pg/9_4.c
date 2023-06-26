#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[31];
    float price;
} Book;
void getline(char *str)
{
    char c;
    while ((c = getchar()) != '\n')
        *str++ = c;
    *str = '\0';
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    Book max = {"", 0}, min = {"", 1000000};
    for (int i = 0; i < n; i++)
    {
        Book book;
        getline(book.name);
        scanf("%f\n", &book.price);
        if (book.price > max.price)
        {
            max.price = book.price;
            strcpy(max.name, book.name);
        }
        if (book.price < min.price)
        {
            min.price = book.price;
            strcpy(min.name, book.name);
        }
    }
    printf("%.2f, %s\n%.2f, %s", max.price, max.name, min.price, min.name);
    return 0;
}