#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int max = arr[0], min = arr[0];
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < min)
      min = arr[i];
    if (arr[i] > max)
      max = arr[i];
  }
  int secondMax = arr[0], secondMin = arr[0];
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > secondMax && arr[i] != max)
      secondMax = arr[i];
    if (arr[i] < secondMax && arr[i] != min)
      secondMin = arr[i];
  }
  if (max == secondMax || min == secondMin)
  {
    secondMax = -1;
    secondMin = -1;
  }
  cout << "2nd Min: " << secondMin << " and Max: " << secondMax;
  return 0;
}