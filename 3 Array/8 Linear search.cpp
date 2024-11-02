#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int v)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == v)
      return i;
  }
  return -1;
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int v;
  cin >> v;
  int idx = linearSearch(arr, n, v);
  cout << "Index: " << idx;
  return 0;
}