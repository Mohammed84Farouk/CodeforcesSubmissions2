/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sIntBin(n) __builtin_popcount(n)     //works for integers
#define getUnique(v) {sort(v.begin(),v.end());v.erase(unique(v.begin(),v.end()),v.end());}
typedef long long ll;
const int N=1e3+9, M=1e9+6, mod=998244353, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
vector<int>primes;
void sieve(){
    vector<bool>isPrime(N+1,true);
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<=N;i++){
        if(isPrime[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= N; j += i)
                isPrime[j] = false;
        }
    }
}

void solve() {
    sieve();
    int n;
    cin>>n;
    auto x=*lower_bound(primes.begin(), primes.end(), n);
    cout<<x<<'\n';
    x-=n;
    for(int i=1;i<=n;i++){
        if(i!=n) cout<<i<<" "<<i+1<<'\n';
        else cout<<i<<" 1\n";
    }
    for(int i=2,j=n;i<=x+1;i++,j--) cout<<i<<" "<<j<<'\n';
}

int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int tt=1;
//    cin>>tt;
    while(tt--)
        solve();
    return 0;
}
