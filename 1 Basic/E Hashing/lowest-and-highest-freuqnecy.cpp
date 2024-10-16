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

  int lowest_frequency = NULL, highest_frequency = NULL;
  for (auto x : counter)
  {
    int element = x.first, frequency = x.second;
    if (lowest_frequency == NULL)
      lowest_frequency = element;
    if (highest_frequency == NULL)
      highest_frequency = element;
    if (frequency < lowest_frequency)
      lowest_frequency = element;
    if (frequency > highest_frequency)
      highest_frequency = element;
  }
  cout << "Highest: " << highest_frequency << " and Lowest: " << lowest_frequency;
}