#include <bits/stdc++.h>
using namespace std;

int getUniqueArray(int arr[], int n)
{
  int k = 0;
  for (int j = 1; j < n; j++)
  {
    if (arr[j] != arr[k])
    {
      arr[++k] = arr[j];
    }
  }
  return k + 1;
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int k = getUniqueArray(arr, n);
  cout << "K: " << k << endl;
  for (int i = 0; i < k; i++)
    cout << arr[i] << " ";
  return 0;
}