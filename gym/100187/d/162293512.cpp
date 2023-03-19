#include<bits/stdc++.h>

using namespace std;

unsigned long long power(unsigned long long x,
                                  int y, int p)
{
    unsigned long long res = 1; // Initialize result

    x = x % p; // Update x if it is more than or
    // equal to p

    while (y > 0)
    {

        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

// Returns n^(-1) mod p
unsigned long long modInverse(unsigned long long n,
                                            int p)
{
    return power(n, p - 2, p);
}


const int MOD = 1000000009;
unsigned long long fact[200005], power2[200005];
int main()
{
    unsigned long long int n, ans = 0;
    cin>>n;
    fact[0] = 1;
    for(int i = 1; i <= n ; i++) fact[i] = (fact[i - 1] * i) % MOD;
    power2[0] = 1;
    for(int i = 1; i <= n ; i++) power2[i] = (power2[i - 1] * 2) % MOD;
    long long int no = 1;
    for(int i = n - 1; i > 0; i--)
    {
        ans += (power2[n - i] - 1) * ((fact[n] * modInverse(fact[i], MOD) % MOD * modInverse(fact[n - i], MOD) % MOD) % MOD);
        ans %= MOD;
       // ans = (ans + (((fact[n] / (fact[i] * fact[n - i])) % MOD) * (no % MOD)) % MOD) % MOD;
     //   cout<<ans<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
