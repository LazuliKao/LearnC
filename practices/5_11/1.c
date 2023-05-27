#include <stdio.h>
int main(int argc, char const *argv[])
{
    int count;
    scanf("%d", &count);
    int nums[10];
    for (int i = 0; i < count; i++)
        scanf("%d", &nums[i]);
    int newNum;
    scanf("%d", &newNum);
    int i = 0;
    for (; i < count; i++)
    {
        if (nums[i] > newNum)
            break;
    }
    for (int j = count; j >= i; j--)
        nums[j] = nums[j - 1];
    nums[i] = newNum;
    count++;
    for (int j = 0; j < count; j++)
        printf("%d ", nums[j]);
    return 0;
}