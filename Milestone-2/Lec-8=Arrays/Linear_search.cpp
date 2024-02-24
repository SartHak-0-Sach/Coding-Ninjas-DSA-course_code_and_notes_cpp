int linearSearch(int *arr, int n, int x)
{
    int count = 0;
    int y = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == x)
        {
            count += 1;
            y = i;
        }
    }
    if (count > 0)
    {
        return y;
    }
    else
    {
        return -1;
    }
}