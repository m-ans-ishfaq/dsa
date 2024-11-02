#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a < b) {
        // Swap
        int temp = a;
        a = b;
        b = temp;
    }
    // At this point, a <= b
    if (a % b == 0)
        return b;
    else return gcd(b, a % b);
}

int lcm(int a, int b)
{
    int lcm = (a * b)/gcd(a,b);
    return lcm;
}

main()
{
    cout << lcm(12, 36) << endl;
    cout << lcm(3, 12) << endl;
    cout << lcm(7, 45) << endl;
}