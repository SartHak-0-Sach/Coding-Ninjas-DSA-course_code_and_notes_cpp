/*
    Time complexity: O( N )
    Space complexity: O( 1 )

    Where 'N' is the size of array.
*/

#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> &arr, int n) {

    // Create a temporary variable 'temp' and initialize it with 0.
    int maxElement = 0;

    // Traverse the array.
    for (int i: arr){
        // Update temp with the max of the current element of arr or temp.
        maxElement = max(maxElement, i);
    }
    
    // Return 'temp'.
    return maxElement;

}

int main(int argc, char const *argv[])
{
    // Vector to store the elements of array.
    vector<int> arr = {1, 2, 3, 4, 5};
    // Call function 'largestElement()', pass 'arr' as argument.
    cout << largestElement(arr, arr.size());
    return 0;
}
