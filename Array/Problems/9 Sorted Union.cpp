#include <bits/stdc++.h>
using namespace std;

vector<int> sortedUnion(int arr1[], int n1, int arr2[], int n2)
{
  vector<int> sorted;
  int i = 0, j = 0;
  while (i < n1 && j < n2)
  {
    if (arr1[i] < arr2[j])
    {
      sorted.push_back(arr1[i]);
      i++;
    }
    else if (arr2[j] < arr1[i])
    {
      sorted.push_back(arr2[j]);
      j++;
    }
    else if (arr1[i] == arr2[j])
    {
      sorted.push_back(arr1[i]);
      i++;
      j++;
    }
  }
  while (i < n1)
  {
    sorted.push_back(arr1[i]);
    i++;
  }
  while (j < n2)
  {
    sorted.push_back(arr2[j]);
    j++;
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