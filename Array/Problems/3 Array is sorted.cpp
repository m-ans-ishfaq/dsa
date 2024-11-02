#include <bits/stdc++.h>
using namespace std;

bool arrayIsSorted(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int j = i + 1;
    if (arr[j] < arr[i])
      return false;
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

  bool sorted = arrayIsSorted(arr, n);
  cout << "Array is sorted: " << sorted;
  return 0;
}