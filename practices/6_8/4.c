#include <stdio.h>
typedef struct
{
    char *id[10];
    int order;
    int age;
} Person;
int main(int argc, char const *argv[])
{
    int count;
    scanf("%d", &count);

    Person *persons = (Person *)malloc(count * sizeof(Person));
    for (int i = 0; i < count; i++)
    {
        Person *current = &persons[i];
        scanf("%s %d", current->id, &current->age);
        current->order = i + 1;
    }
    for (int i = 0; i < count; i++)
    {
        Person *current = &persons[i];
        for (int j = i + 1; j < count; j++)
        {
            Person *next = &persons[j];
            if (next->age >= 60 && current->age < 60 ||
                next->age >= 60 && current->age >= 60 && next->age > current->age ||
                next->order < current->order)
            {
                Person temp = *current;
                *current = *next;
                *next = temp;
            }
        }
    }
    for (int i = 0; i < count; i++)
    {
        Person *current = &persons[i];
        printf("%s\n", current->id);
    }
    return 0;
}