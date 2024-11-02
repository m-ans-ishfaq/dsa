#include <bits/stdc++.h>
using namespace std;

void moveZerosToEnd(int arr[], int n)
{
  int zeros = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
    {
      zeros++;
      continue;
    }
    if (zeros == 0)
      continue;
    swap(arr[i - zeros], arr[i]);
  }
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  moveZerosToEnd(arr, n);
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  return 0;
}