#include <bits/stdc++.h>
using namespace std;

int longestSubarray(int arr[], int n, int k)
{
  int max = -1;
  for (int i = 0; i < (n - 1); i++)
  {
    int j = i + 1;
    int count = arr[i];
    while (count < k && j < n)
    {
      count += arr[j];
      j++;
    }
    int l = (j - i);
    if (count == k && l > max)
      max = l;
    else
      continue;
  }
  return max;
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
  int num = longestSubarray(arr, n, k);
  cout << "Longest subarray length: " << num;
  return 0;
}
