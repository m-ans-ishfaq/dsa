#include<ctype.h>
#include<string.h>
#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string newS = "";
        for (char c: s)
        {
            newS += tolower(c);
        }
        string filteredString = "";
        for (char c: newS)
        {
            if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
            {
                filteredString += c;
            }
        }
        cout << filteredString;
        if (filteredString == "") return true;
        int n = filteredString.length();
        for (int i = 0; i < n/2; i++)
        {
            if (filteredString[i] != filteredString[n-1-i]) return false;
        }
        return true;
    }
};

int main()
{
    Solution s;
    cout << s.isPalindrome("0P");
}