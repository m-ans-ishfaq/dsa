#include<iostream>
#include<math.h>
#include<string.h>
#include "bits/stdc++.h"
#include <ext/numeric>
using namespace std;
using namespace __gnu_cxx;

bool is_armstrong(int n)
{
    int sum = 0;
    string str = to_string(n);
    int length = str.length();
    for (int i = 0; i < length; i++)
    {
        int d = str[i] - '0';
        sum += power(d, length);
    }
    return sum == n;
}

int main()
{
    int n;
    cin >> n;
    cout << is_armstrong(n);
}