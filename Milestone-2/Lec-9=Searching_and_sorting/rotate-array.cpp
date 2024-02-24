void rotate(int *input, int d, int n)
{
    int arr[n];
    for(int i=0; i<n; i++)
    {
        if(i>=d)
        {
            arr[i-d]=input[i];
        }
        else if(i<d)
        {
            arr[i+n-d]=input[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        input[i]=arr[i];
    }
}