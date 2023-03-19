#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int N = 2e3 + 5;
const int mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        ll n;
        cin >> n;

        cout << -(n - 1) << " " << n << endl;
    }
    return 0;
}