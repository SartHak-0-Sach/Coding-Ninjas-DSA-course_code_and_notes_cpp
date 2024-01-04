int findSecondLargest(int *input, int n)
{
    int largest=-2147483648;
    int second_largest=-2147483648;
    int index;

    if(n<=1)
    {
      return -2147483648;
    }

    for(int i=0; i<n; i++)
    {
      if (input[i] > largest) {
        largest = input[i];
        index=i;
      }
    }

    input[index]=input[n-1];
    input[n-1]=largest;
    largest=-2147483648;

    for(int i=0; i<n; i++)
    {
        if(input[i]>largest)
        {
            second_largest=largest;
            largest=input[i];
        } else if (input[i] < largest && input[i] > second_largest) {
          second_largest = input[i];
        }
    }
    return second_largest;

    // for(int i=0; i<n; i++)
    // {
    //     if(input[i]>largest)
    //     {
    //         largest=input[i];
    //         input[i]=0;
    //     }
    // }

    // input[n - 1] = largest;
    // largest = -1;

    // for(int i=0; i<n-1; i++)
    // {
    //     arr[i]=input[i];
    // }

    // for(int i=0; i<n-1; i++)
    // {
    //     if(arr[i]>largest)
    //     {
    //         largest=arr[i];
    //     }
    // }

    // return largest;
}