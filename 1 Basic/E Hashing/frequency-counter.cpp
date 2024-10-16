#include <bits/stdc++.h>
using namespace std;

main()
{

  // Take array as input
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // Count frequency
  unordered_map<int, int> counter;
  for (auto e : arr)
  {
    if (counter[e])
    {
      counter[e]++;
    }
    else
    {
      counter[e] = 1;
    }
  }

  // Print Frequency hashmap
  for (auto x : counter)
    cout << x.first << " " << x.second << endl;
}