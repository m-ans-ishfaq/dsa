#include <bits/stdc++.h>
using namespace std;

vector<int> sortedUnion(int arr1[], int n1, int arr2[], int n2)
{
  vector<int> sorted;
  map<int, int> map;
  for (int i = 0; i < n1; i++)
    map[arr1[i]]++;
  for (int i = 0; i < n2; i++)
    map[arr2[i]]++;
  for (auto &it : map)
  {
    sorted.push_back(it.first);
  }
  return sorted;
}

int main()
{
  int n1;
  cin >> n1;
  int arr1[n1];
  for (int i = 0; i < n1; i++)
    cin >> arr1[i];
  int n2;
  cin >> n2;
  int arr2[n2];
  for (int i = 0; i < n2; i++)
    cin >> arr2[i];
  int v;
  cin >> v;
  vector<int> sorted = sortedUnion(arr1, n1, arr2, n2);
  for (int e : sorted)
  {
    cout << e << " ";
  }
  return 0;
}

/*
1 1
2 0
3 0
4 -1
5 2
*/