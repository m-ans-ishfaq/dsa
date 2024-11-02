#include<iostream>
#include<vector>
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
// Extended Euclidean Algorithm hasn't been used
int get_modular_inverse(int a, int b)
{
    if (gcd(a, b) != 1)
        return -1;
    
    int inverse = 1;
    while (a*(inverse) % b != 1)
        inverse++;
    return inverse;
}

main()
{
    cout << get_modular_inverse(3,5) << endl;
    cout << get_modular_inverse(3,26) << endl;
    cout << get_modular_inverse(3,7) << endl;
    cout << get_modular_inverse(101,4620) << endl;
}