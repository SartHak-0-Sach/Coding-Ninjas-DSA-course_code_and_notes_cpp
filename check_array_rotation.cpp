int arrayRotateCheck(int *input, int size)
{
    int largest=0;
    int index=0;
    if(size==0) return 0;
    
    for(int i=0; i<size; i++)
    {
        if(input[i]>largest){
          largest = input[i];
          index = i+1;
        }
    }
    if(index==size) return 0;
    return index;
}


