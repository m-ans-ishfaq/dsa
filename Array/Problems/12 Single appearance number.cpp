#include <bits/stdc++.h>
using namespace std;

int appearsOnce(int arr[], int n)
{
  unordered_map<int, int> hashmap;
  for (int i = 0; i < n; i++)
  {
    hashmap[arr[i]]++;
  }
  for (auto &it : hashmap)
  {
    if (it.second == 1)
      return it.first;
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

  int num = appearsOnce(arr, n);
  cout << "Number that appears once: " << num;
  return 0;
}

// XOR SOLUTION
// int singleNumber(vector<int>& nums) {
//     int k = 0, n = nums.size();
//     for (int i = 0; i < n; i++)
//     {
//         k ^= nums[i];
//     }
//     return k;
// }