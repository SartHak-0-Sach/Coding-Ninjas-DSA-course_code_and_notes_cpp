// #include <vector>

// class PriorityQueue
// {
//     vector<int> pq;

// public:
//     PriorityQueue()
//     {
//     }

//     bool isEmpty()
//     {
//         return pq.size() == 0;
//     }

//     // Return the size of priorityQueue - no of elements present
//     int getSize()
//     {
//         return pq.size();
//     }

//     int getMin()
//     {
//         if (isEmpty())
//         {
//             return 0; // Priority Queue is empty
//         }
//         return pq[0];
//     }
// };



// #include <vector>

// class PriorityQueue
// {
//     vector<int> pq;

// public:
//     PriorityQueue()
//     {
//     }

//     bool isEmpty()
//     {
//         return pq.size() == 0;
//     }

//     // Return the size of priorityQueue - no of elements present
//     int getSize()
//     {
//         return pq.size();
//     }

//     int getMin()
//     {
//         if (isEmpty())
//         {
//             return 0; // Priority Queue is empty
//         }
//         return pq[0];
//     }

//     void insert(int element)
//     {
//         pq.push_back(element);

//         int childIndex = pq.size() - 1;

//         while (childIndex > 0)
//         {
//             int parentIndex = (childIndex - 1) / 2;

//             if (pq[childIndex] < pq[parentIndex])
//             {
//                 int temp = pq[childIndex];
//                 pq[childIndex] = pq[parentIndex];
//                 pq[parentIndex] = temp;
//             }
//             else
//             {
//                 break;
//             }
//             childIndex = parentIndex;
//         }
//     }
// };



// #include <iostream>
// using namespace std;

// void inplaceHeapSort(int pq[], int n)
// {
//     // Build the heap in input array
//     for (int i = 1; i < n; i++)
//     {

//         int childIndex = i;
//         while (childIndex > 0)
//         {
//             int parentIndex = (childIndex - 1) / 2;

//             if (pq[childIndex] < pq[parentIndex])
//             {
//                 int temp = pq[childIndex];
//                 pq[childIndex] = pq[parentIndex];
//                 pq[parentIndex] = temp;
//             }
//             else
//             {
//                 break;
//             }
//             childIndex = parentIndex;
//         }
//     }

//     // Remove elements

//     int size = n;

//     while (size > 1)
//     {
//         int temp = pq[0];
//         pq[0] = pq[size - 1];
//         pq[size - 1] = temp;

//         size--;

//         int parentIndex = 0;
//         int leftChildIndex = 2 * parentIndex + 1;
//         int rightChildIndx = 2 * parentIndex + 2;

//         while (leftChildIndex < size)
//         {
//             int minIndex = parentIndex;
//             if (pq[minIndex] > pq[leftChildIndex])
//             {
//                 minIndex = leftChildIndex;
//             }
//             if (rightChildIndx < size && pq[rightChildIndx] < pq[minIndex])
//             {
//                 minIndex = rightChildIndx;
//             }
//             if (minIndex == parentIndex)
//             {
//                 break;
//             }
//             int temp = pq[minIndex];
//             pq[minIndex] = pq[parentIndex];
//             pq[parentIndex] = temp;

//             parentIndex = minIndex;
//             leftChildIndex = 2 * parentIndex + 1;
//             rightChildIndx = 2 * parentIndex + 2;
//         }
//     }
// }

// int main()
// {
//     int input[] = {5, 1, 2, 0, 8};
//     inplaceHeapSort(input, 5);
//     for (int i = 0; i < 5; i++)
//     {
//         cout << input[i] << " ";
//     }
//     cout << endl;
// }




// #include <iostream>
// using namespace std;
// #include <queue>

// int main()
// {
//     priority_queue<int> p;

//     p.push(100);
//     p.push(21);
//     p.push(7);
//     p.push(165);
//     p.push(78);
//     p.push(4);

//     cout << p.size() << endl;
//     cout << p.empty() << endl;
//     cout << p.top() << endl;

//     while (!p.empty())
//     {
//         cout << p.top() << endl;
//         p.pop();
//     }
// }

#include <iostream>
using namespace std;
#include <queue>

int main()
{
    priority_queue<int, vector<int>, greater<int>> p;

    p.push(100);
    p.push(21);
    p.push(7);
    p.push(165);
    p.push(78);
    p.push(4);

    cout << p.size() << endl;
    cout << p.empty() << endl;
    cout << p.top() << endl;

    while (!p.empty())
    {
        cout << p.top() << endl;
        p.pop();
    }
}