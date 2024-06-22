#include<iostream>
using namespace std;

void swap(int &n1, int &n2) {
    int t = n1;
    n2 = n1;
    n1 = t;
}

int gcd(int n1, int n2)
{
    if (n1 < n2) swap(n1, n2);
    if (n1 % n2 == 0) return n2;
    return gcd(n1 % n2, n2);
}

int main()
{
    int n1, n2;
    cin >> n1;
    cin >> n2;
    cout << gcd(n1, n2);
    return 0;
}