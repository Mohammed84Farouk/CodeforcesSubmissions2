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
const int N=1e3+9, M=1e9+6, mod=998244353, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
vector<ll>color;
void sieve(int n){
    color.resize(n+2,0);
    for(ll i=2;i<=n+1;i++)
        if(!color[i])
            for(ll j=i*i;j<=n+1;j+=i)
                color[j]=1;
}
void solve() {
    int n;
    cin>>n;
    sieve(n);
    if(n>=3) cout<<2<<'\n';
    else cout<<1<<'\n';
    for(int i=2;i<=n+1;i++)
        cout<<color[i]+1<<" ";
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
