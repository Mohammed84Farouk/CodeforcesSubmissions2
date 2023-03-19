/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sIntBin(n) __builtin_popcount(n)     //works for integers
#define getUnique(v) {sort(v.begin(),v.end());v.erase(unique(v.begin(),v.end()),v.end());}
using namespace std;
typedef long long ll;
const int N=2e5+5, M=27, mod=998244353, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int &i:v) cin>>i;
    std::sort(v.begin(), v.end());
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        auto xx=std::upper_bound(v.begin(), v.end(), x)-v.begin();
//        cout<<x<<" ";
        if(v[xx]!=x)
            cout<<xx<<" ";
        else cout<<xx+1<<" ";
    }
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