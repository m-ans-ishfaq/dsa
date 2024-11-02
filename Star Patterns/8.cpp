#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= 0; i--)
    {
        for (int j = n; j >= (i+1); j--) cout << " ";
        for (int j = (i*2) + 1; j >= n - 2; j--) cout << "*";
        cout << endl;
    }
}