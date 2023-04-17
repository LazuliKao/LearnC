#include <stdio.h>
int main(int argc, char const *argv[])
{
    int m, n;
    scanf("%d %d", &m, &n);

    return 0;
}
int gcd(int m, int n)
{
    if (m % n == 0)
        return n;
    else
        return gcd(n, m % n);
}
int gcd2(int m, int n)
{
    int t;
    while (t = m % n)
    {
        m = n;
        n = t;
    }
    return n;
}
int lcm(int m, int n)
{
    return m * n / gcd(m, n);
}