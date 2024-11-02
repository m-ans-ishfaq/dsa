#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

vector<string> convert_message_to_blocks(string message)
{
    vector<string> blocks;
    string block_pair = "";
    for (int i = 0; i < message.length(); i++)
    {
        char character = message[i];
        int index_of_character = character - int('A');
        if (index_of_character < 10)
            block_pair += "0";
        block_pair += to_string(index_of_character);
        if (block_pair.length() == 4)
        {
            blocks.push_back(block_pair);
            block_pair = "";
        }
    }
    return blocks;
}

string convert_blocks_to_message(string blocks)
{
    string message = "";
    for (int i = 0; i < blocks.length(); i += 2)
    {
        string number_string = to_string(blocks[i]) + to_string(blocks[i+1]);
        int number = stoi(number_string);
        char character = (number % 26) + 'A';
        message += character;
    }
    return message;
}

int binary_modular_exponentiation(int base, int exponent, int mod) {
    int result = 1;
    base %= mod;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exponent /= 2;
    }
    return result;
}

main()
{
    // RSA Cryptosystem
    int p = 43, q = 59;
    int n = p * q;
    int e = 13;
    string message = "STOP";
    vector<string> blocks = convert_message_to_blocks(message);
    string encrypted_message = "";
    for (int i = 0; i < blocks.size(); i++)
    {
        string C = to_string(
            binary_modular_exponentiation(stoi(blocks[i]), e, n) // blocks[i] is M
        );
        encrypted_message += C;
    }
    cout << encrypted_message;
}