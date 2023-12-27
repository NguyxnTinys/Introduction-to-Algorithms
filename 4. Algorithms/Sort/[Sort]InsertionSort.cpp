// CHEN
/*
  tao key de luu gia tri nho nhat
  Complexity: O(n^2)
*/
void insertionSort(int n, int a[])
{
  int key, i, j;
  for (int i = 1; i < n; i++)
  {
    key = a[i];
    j = i - 1;
    while (a[j] > key && j >= 0)
    {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = key;
  }
}