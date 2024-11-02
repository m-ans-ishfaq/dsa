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

main()
{
    // Sample case
    cout << gcd(14, 7) << endl;
    cout << gcd(51, 9) << endl;
    cout << gcd(140, 25) << endl;
}