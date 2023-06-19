#include <stdio.h>
typedef struct
{
    int order;
    int grade;
} Member;
int main(int argc, char const *argv[])
{
    int n, m; // 总 / 志愿者
    scanf("%d %d", &n, &m);
    int required = m * 1.5;
    Member *members = (Member *)malloc(n * sizeof(Member));
    for (int i = 0; i < n; i++)
    {
        Member *current = &members[i];
        scanf("%d %d", &current->order, &current->grade);
    }
    for (int i = 0; i < n; i++)
    {
        Member *current = &members[i];
        for (int j = i + 1; j < n; j++)
        {
            Member *next = &members[j];
            if (current->grade < next->grade || (current->grade == next->grade && current->order > next->order))
            {
                Member temp = *current;
                *current = *next;
                *next = temp;
            }
        }
    }
    int grade = members[required - 1].grade;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        Member *current = &members[i];
        if (current->grade >= grade)
        {
            count++;
        }
    }
    printf("%d %d\n", grade, count);
    for (int i = 0; i < count; i++)
    {
        Member *current = &members[i];
        printf("%d %d\n", current->order, current->grade);
    }
    return 0;
}