#include <bits/stdc++.h>
using namespace std;
 
const long long MOD = 998244353;
 
long long power(long long base, long long exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return result;
}

long long mod_pow(long long base, int exponent, int modulus) {
    long long result = 1;
    base = base % modulus;

    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = ((result % MOD) * (base % MOD)) % MOD;
        }
        exponent /= 2;
        base = ((base % MOD) * (base % MOD))%MOD;
    }

    return result;
}

long long mod_inverse(long long a, int modulus) {
    return mod_pow(a, modulus - 2, modulus);
}
 
void solution() {
    long long n, a;
    cin >> n >> a;
    long long c = ((mod_pow(2,a,MOD) % MOD) * (3%MOD)) % MOD;
    //long long c = (((1LL << a) % MOD)  * (3%MOD)) % MOD;
    long long d = mod_pow(10,n,MOD);

    long long c_inverse = mod_inverse(c,MOD);
    cout<<((d / c) + 1) % MOD<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}