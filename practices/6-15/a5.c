#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 金、木、水、火、土
    //  0     1     2   3     4
    // 金生水，木生火，水生木，火生土，土生金。
    int linkSpawn[5] = {
        2, // 金生水
        3, // 木生火
        1, // 水生木
        4, // 火生土
        0  // 土生金
    };
    int linkKill[5] = {
        4, // 金克木
        2, // 木克土
        3, // 土克水
        1, // 水克火
        0  // 火克金
    };
    int count = 0;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (linkSpawn[a] == b)
            printf("%d sheng %d\n", a, b);
        else if (linkKill[a] == b)
            printf("%d ke %d\n", a, b);
        else if (linkSpawn[b] == a)
            printf("%d sheng %d\n", b, a);
        else if (linkKill[b] == a)
            printf("%d ke %d\n", b, a);
    }
    return 0;
}