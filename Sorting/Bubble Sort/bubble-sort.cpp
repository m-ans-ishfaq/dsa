#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    bool swapped = false;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] > arr[j])
      {
        swap(arr[i], arr[j]);
        swapped = true;
      }
    }
    if (!swapped)
      return;
  }
}

main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  bubbleSort(arr, n);

  for (auto x : arr)
    cout << x << " ";
}