#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

bool is_prime_number(int n)
{
    int sqrtv = sqrt(n);
    for (int i = 2; i <= sqrtv; i++)
    {
      if (n % i == 0) return false;
      int d = n / i;
      if (n % d == 0) return false; 
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    cout << is_prime_number(n);
    return 0;
}