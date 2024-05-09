#include <iostream>

using namespace std;

// Function to calculate (base^exponent) % modulus efficiently
long long int modPow(long long int base, long long int exponent, long long int modulus) {
    long long int result = 1;
    base %= modulus;
    while (exponent > 0) {
        if (exponent & 1) // If exponent is odd, multiply result with base
            result = (result * base) % modulus;
        base = (base * base) % modulus; // Square the base
        exponent >>= 1; // Divide the exponent by 2
    }
    return result;
}

int main() {
    long long int P = 23; // Prime number P
    cout << "The value of P: " << P << endl;

    long long int G = 9; // Primitive root for P
    cout << "The value of G: " << G << endl;

    long long int a = 4; // Alice's private key
    cout << "Alice's private key: " << a << endl;

    long long int b = 3; // Bob's private key
    cout << "Bob's private key: " << b << endl;

    long long int x = modPow(G, a, P); // Alice's generated key
    long long int y = modPow(G, b, P); // Bob's generated key

    long long int ka = modPow(y, a, P); // Alice's secret key
    long long int kb = modPow(x, b, P); // Bob's secret key

    cout << "Secret key for Alice: " << ka << endl;
    cout << "Secret key for Bob: " << kb << endl;

    return 0;
}
