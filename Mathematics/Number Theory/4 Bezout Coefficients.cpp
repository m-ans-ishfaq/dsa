#include<iostream>
#include<vector>
using namespace std;

vector<int> get_bezout_coefficients(int a, int b) {

    if (b == 0) return {1, 0};

    vector<int> result = get_bezout_coefficients(b, a % b);
    
    int s = result[1];
    int t = result[0] - (a / b) * result[1];

    return {s, t};
}

main()
{
    vector<int> _101mod4620 = get_bezout_coefficients(101, 4620);
    cout << "Bezout Coefficients: ";
    for (int i = 0; i < _101mod4620.size(); i++)
        cout << _101mod4620[i] << " ";
}