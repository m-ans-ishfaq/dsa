#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a < b)
    {
        // Swap
        int temp = a;
        a = b;
        b = temp;
    }
    // At this point, a <= b
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}

int get_modular_inverse(int a, int b)
{
    if (gcd(a, b) != 1)
        return -1;

    int inverse = 1;
    while (a * (inverse) % b != 1)
        inverse++;
    return inverse;
}

main()
{
    // RSA Decryption key 'd'
    int p = 43, q = 59; // If p and q weren't given, then we would have to guess it using brute force, but according to question statement, it's given, once p and q are known, rsa is cracked
    int n = p * q;
    int e = 13;
    // Decryption key 'd' = (e inverse) modulo (p-1)(q-1)
    int d = get_modular_inverse(e, (p - 1) * (q - 1));
    cout << d;
}