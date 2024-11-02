#include<iostream>
using namespace std;

void swap(string &s, int i1, int i2) {
    char t = s[i1];
    s[i1] = s[i2];
    s[i2] = t;
}

int reverse(int x) {
    string n = to_string(abs(x));
    for (int i = 0; i < n.length()/2; i++) {
        swap(n, i, n.length() - 1 - i);
    }
    if (n.length() == 10)
    {
        string limit = "2147483647";
        bool isValid = false;
        for (int i = 0; i < n.length(); i++) {
            int diff = limit[i] - n[i];
            if (diff > 0) {
                isValid = true;
                break;
            }
            if (diff < 0)
                break;
        }
        if (!isValid && n != limit)
            return 0;
    }
    if (x < 0)
        n = "-" + n;
    return stoi(n);
}

int main()
{
    int n;
    cin >> n;
    cout << reverse(n);
}