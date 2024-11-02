#include <bits/stdc++.h>
using namespace std;

int maxConsecutives(int nums[], int n)
{
  int max = 0, k = 0;
  if (n == 1)
    return nums[0];
  bool found1 = 0;
  for (int i = 0; i < n - 1; i++)
  {
    int j = i + 1;
    if (nums[i] == 1 || nums[j] == 1)
      found1 = 1;
    if (nums[i] == 1 && nums[j] == 1)
    {
      if (k == 0)
        k = 2;
      else
        k++;
    }
    else
    {
      if (k > max)
        max = k;
      k = 0;
    }
  }
  if (k > max)
    max = k;
  if (max == 0)
    max += found1;
  return max;
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int num = maxConsecutives(arr, n);
  cout << "The max consecutive is: " << num;
  return 0;
}