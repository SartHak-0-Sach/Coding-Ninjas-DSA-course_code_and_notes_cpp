// void swap(int *xp, int *yp) {
//   int temp = *xp;
//   *xp = *yp;
//   *yp = temp;
// }

// void bubbleSort(int *input, int size) {
//   int i, j;
//   for (i = 0; i < size - 1; i++)
//     for (j = 0; j < size - i - 1; j++)
//       if (input[j] > input[j + 1])
//         swap(input[j], input[j + 1]);
// }
#include <bits/stdc++.h>

void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
  int i = 0, j = 0, k = 0;
  while (i < size1) {
    ans[k++] = arr1[i++];
  }
  while (j < size2) {
    ans[k++] = arr2[j++];
  }
  std::sort(ans, ans + size1 + size2);
}