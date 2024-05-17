void swap(int *xp, int *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void bubbleSort(int *input, int size)
{
  for (int i = 0; i < size - 1; i++)
    for (int j = 0; j < size - i - 1; j++)
      if (input[j] > input[j + 1])
        swap(input[j], input[j + 1]);
}