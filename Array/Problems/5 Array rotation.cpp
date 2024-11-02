#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int p, int q)
{
  int mid = (q - p) / 2;
  for (int i = 0; i < mid; i++)
  {
    swap(arr[p + i], arr[q - 1 - i]);
  }
}

void rotateArray(int arr[], int n, int k)
{
  k %= n;
  reverseArray(arr, 0, n);
  reverseArray(arr, 0, k);
  reverseArray(arr, k, n);
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int k;
  cin >> k;
  rotateArray(arr, n, 2);
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  return 0;
}