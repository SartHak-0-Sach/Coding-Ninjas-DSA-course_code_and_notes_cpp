#include <iostream>
#include <climits>
using std::cout;

void Leaders(int arr[],int len)
{
	int save[len];
	int largest = INT_MIN;
	int j = 0;
	for(int i = len-1; i>=0; i--)
	{
		if(arr[i]>=largest)
		{
			save[j] = arr[i];
			largest = arr[i];
			j++;
		}
	}

	for(int i = j-1; i>=0; i--)
	{
		cout<<save[i]<<" ";
	}
}