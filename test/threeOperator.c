int test1()
{
    printf("a");
    return -1;
}
int test2()
{
    printf("b");
    return 1;
}
int main()
{
    int c = 0;
    int test = 0;
    printf("%d", test ? test1() : test2());
}
