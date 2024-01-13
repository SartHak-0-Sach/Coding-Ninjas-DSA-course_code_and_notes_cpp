// void swap(int *xp, int *yp) {
//   int temp = *xp;
//   *xp = *yp;
//   *yp = temp;
// }

void pushZeroesEnd(int *input, int size)
{
    // for(int i=0; i<size; i++)
    // {
    //     if(input[i]==0)
    //     {
    //         input[i]=-1;
    //         for(int j=i; j<=size; j++)
    //         {
    //             swap(input[j],input[j+1]);
    //         }
    //     }
    // }
    // for(int k=0; k<size; k++)
    // {
    //     if(input[k]==-1)
    //     {
    //         input[k]=0;
    //     }
    // }
    int arr[size];
    for(int j=0; j<size; j++)
    {
        arr[j]=0;
    }
    int x=0;
    for(int i=0; i<size; i++)
    {
        if(input[i]>0)
        {
            arr[x]=input[i];
            x++;
        }
    }
    x=0;
    while(x<size)
    {
        input[x]=arr[x];
        x++;
    }
}