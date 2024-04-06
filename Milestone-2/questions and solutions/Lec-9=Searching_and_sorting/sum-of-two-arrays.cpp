void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    int carry=0;
    int size3=0;
    int i,j;
    if(size2>size1)
    {
        size3=size2;        
    }
    else{
        size3=size1;
    }
    for(i=size1-1, j=size2-1; i>=0 || j>=0; i--, j--)
    {
        output[size3]=(input1[i]+input2[j]+carry)%10;
        size3--;
        carry = (input1[i] + input2[j] + carry) / 10;
    }
    if(size1==0)
    {
        for(i=0; i<size2; i++)
        {
            output[i+1]=input2[i];
        }
    }
    else if(size2==0)
    {
        for(i=0; i<size1; i++)
        {
            output[i+1]=input1[i];
        }
    }
    output[0]=carry;
}