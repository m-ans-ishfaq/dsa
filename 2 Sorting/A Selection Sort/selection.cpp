#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int min = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[min])
        min = j;
    }
    if (min != i)
      swap(arr[i], arr[min]);
  }
}

main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  selectionSort(arr, n);

  for (auto x : arr)
    cout << x << " ";
}