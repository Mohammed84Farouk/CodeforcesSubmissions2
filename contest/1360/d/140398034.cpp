/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sIntBin(n) __builtin_popcount(n)     //works for integers
#define getUnique(e) {sort(e.begin(),e.end());e.erase(unique(e.begin(),e.end()),e.end());}
typedef long long ll;
const int N=1e5+9, M=1e9+6, mod=998244353, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
ll flag,k;
void sieve(ll n) {
    for (ll i = 2; i * i <= n; i++)
        if (n%i==0&&n/i<=k)
            flag = max(flag,n/i);
        else if (n%i==0&&i<=k)
            flag = max(flag,i);
}

void solve() {
    ll n;
    cin>>n>>k;
    if(k>=n) cout<<1<<'\n';
    else if(k==1) cout<<n<<'\n';
    else{   //we're gonna buy more than 1 package and less than n
        flag=1;
        sieve(n);
        cout<<n/flag<<'\n';
    }
}

int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int tt=1;
    cin>>tt;
    while(tt--)
        solve();
    return 0;
}