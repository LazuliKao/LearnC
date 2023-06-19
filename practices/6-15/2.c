int FindArrayMax(int a[], int n)
{
    int max = -99999;
    for (int i = 0; i < n; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}