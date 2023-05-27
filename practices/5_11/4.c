#include <stdio.h>
int main(int argc, char const *argv[])
{
    int count;
    scanf("%d", &count);
    int nums[1000];
    for (int i = 0; i < count; i++)
        scanf("%d", &nums[i]);
    int maxNum = nums[0];
    int maxCount = 1;
    for (int i = 0; i < count; i++)
    {
        int currentNum = nums[i];
        int currentCount = 1;
        for (int j = i + 1; j < count; j++)
        {
            if (nums[j] == currentNum)
                currentCount++;
        }
        if (currentCount > maxCount)
        {
            maxCount = currentCount;
            maxNum = currentNum;
        }
    }
    printf("%d %d", maxNum, maxCount);
    return 0;
}
/*
 int n;
    scanf("%d", &n);
    int a[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    // sort
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
            if (a[j] < a[min])
                min = j;
        int tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;
    }
    // summary
    int max = 0;
    int num = 0;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
            if (count > max)
            {
                max = count;
                num = a[i];
            }
        }
        else
        {
            count = 1;
        }
    }
    printf("%d %d", num, max);*/