#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) cout << " ";
        for (int j = 0; j < (i * 2) + 1; j++) cout << "*";
        cout << endl;
    }
    for (int i = n; i >= 0; i--)
    {
        for (int j = n; j >= (i+1); j--) cout << " ";
        for (int j = (i*2) + 1; j >= n - 2; j--) cout << "*";
        cout << endl;
    }
}