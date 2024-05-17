int binarySearch(int *input, int size, int val)
{
  int count = 0;
  int y = 0;
  for (int i =size - 1; i >= 0; i--) {
    if (input[i] == val) {
      count += 1;
      y = i;
    }
  }
  if (count > 0) {
    return y;
  } else {
    return -1;
  }
}