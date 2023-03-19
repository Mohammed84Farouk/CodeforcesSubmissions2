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
const int N=2e6+9, M=1e9+6, mod=998244353, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
vector<ll>v;
void prime_factors_sqrt(ll n){ //to print uncomment back
    for (ll i=1;i*i<=n;i++)
        if(n%i==0){
            v.push_back(i);
            if(n/i!=i) v.push_back(n/i);
        }
}

void solve(){
    ll n,k;
    cin>>n>>k;
    prime_factors_sqrt(n);
    std::sort(v.begin(), v.end());
    if(v.size()<k) cout<<"-1";
    else cout<<v[k-1];
}

int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int testCases=1;
//    cin>>testCases;
    while(testCases--)
        solve();
    return 0;
}
