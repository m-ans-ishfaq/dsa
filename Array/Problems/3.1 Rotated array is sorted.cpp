#include <bits/stdc++.h>
using namespace std;

int getInitialIndex(int arr[], int n)
{
  int idx = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] >= arr[idx])
      idx = i;
  }
  for (int i = 0; i < n - 1; i++)
  {
    if (arr[i] >= arr[idx])
      idx = i;
    else
      break;
  }
  return idx;
}

int goBack(int i, int n)
{
  return i > 0 ? i - 1 : n - 1;
}

bool rotatedArrayIsSorted(int arr[], int n)
{
  int initialIndex = getInitialIndex(arr, n);
  int i = initialIndex, j = goBack(initialIndex, n);
  for (int k = 0; k < n - 1; k++)
  {
    if (arr[j] > arr[i])
      return false;
    i = goBack(i, n), j = goBack(j, n);
  }
  return true;
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  bool sorted = rotatedArrayIsSorted(arr, n);
  cout << "Array is sorted: " << sorted;
  return 0;
}