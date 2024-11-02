#include <bits/stdc++.h>
using namespace std;

int missingNumber(int a[], int N)
{
  int xor1 = 0, xor2 = 0;

  for (int i = 0; i < N - 1; i++)
  {
    xor2 = xor2 ^ a[i];
    xor1 = xor1 ^ (i + 1);
  }
  xor1 = xor1 ^ N;

  return (xor1 ^ xor2);
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int num = missingNumber(arr, n + 1);
  cout << "The missing number is: " << num;
  return 0;
}