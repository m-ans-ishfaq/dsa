#include<iostream>
#include<vector>
using namespace std;

vector<int> get_prime_factors(int number)
{
    vector<int> prime_factors;
    while (number != 1)
    {
        for (int i = 2; i <= number; i++) {
            if (number % i == 0) {
                prime_factors.push_back(i);
                number /= i;
                break;
            }
        }
    }
    return prime_factors;
}

void print_prime_factors(int number)
{
    vector<int> prime_factors = get_prime_factors(number);
    for (int i = 0; i < prime_factors.size(); i++) {
        cout << prime_factors[i] << (i == prime_factors.size() - 1 ? "" : "x");
    }
    cout << endl;
}

main()
{
    // Sample Tests
    print_prime_factors(12);
    print_prime_factors(36);
    print_prime_factors(49);
    print_prime_factors(110);
}