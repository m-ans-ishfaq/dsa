#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int max = INT_MIN, sMax = INT_MIN, min = INT_MAX, sMin = INT_MAX;
  if (n < 2)
  {
    sMax = sMin = -1;
  }
  else
  {
    for (int i = 0; i < n; i++)
    {
      if (arr[i] < min)
      {
        sMin = min;
        min = arr[i];
      }
      else if (arr[i] < sMin && arr[i] != min)
      {
        sMin = arr[i];
      }
      if (arr[i] > max)
      {
        sMax = max;
        max = arr[i];
      }
      else if (arr[i] > sMax && arr[i] != max)
      {
        sMax = arr[i];
      }
    }
  }
  cout << "2nd Min: " << sMin << " and Max: " << sMax;
  return 0;
}