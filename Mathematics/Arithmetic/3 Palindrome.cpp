#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0)
        return false;
    if (x <= 9)
        return true;
    vector<int> digits;
    for (long i = 1; i <= x; i*=10) {
        int digit = x % (i*10) / i;
        digits.push_back(digit);
    }
    int digitsLength = digits.size();
    for (int i = 0; i < digitsLength/2; i++) {
        if (digits[i] != digits[digitsLength - 1 - i])
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    cout << isPalindrome(n);
}