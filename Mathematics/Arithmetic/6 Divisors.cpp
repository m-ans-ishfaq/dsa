#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

set<int> get_divisors(int n)
{
    set<int> divisors;
    int sqrtv = sqrt(n);
    for (int i = 1; i <= sqrtv; i++)
    {
      if (n % i == 0) divisors.insert(i);
      int d = n / i;
      if (n % d == 0) divisors.insert(d); 
    }
    return divisors;
}

int main()
{
    int n;
    cin >> n;
    auto divisors = get_divisors(n);
    for (auto d: divisors)
    {
      cout << d << " ";
    }
    return 0;
}