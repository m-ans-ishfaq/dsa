#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        for (int j = n + 1 - (i*2); j >= 0; j--)
        {
            cout << " ";
        }
        for (int j = i; j >= 0; j--)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}