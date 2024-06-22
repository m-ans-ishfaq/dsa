#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = n*2 - 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x = i, y = j;
            if (x >= n) x = 2*(n-1) - i;
            if (y >= n) y = 2*(n-1) - j;
            int min = x;
            if (y < x) min = y;
            cout << n - min << " ";
        }
        cout << endl;
    }
}