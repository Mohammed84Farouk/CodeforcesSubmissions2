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
const int N=1e6+6, M=1e9+6, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
 
void solve() {
    vector<ll> v[4];
    ll w, h, diff, mx = 0;
    cin >> w >> h;
    vector<pair<ll, ll>> vp;
    for (int i = 0; i < 4; ++i) {
        ll k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            ll x;
            cin >> x;
            v[i].push_back(x);
        }
        diff = v[i][k - 1] - v[i][0];
        mx = max(mx, diff);
        vp.push_back({diff, i});
    }
    sort(vp.rbegin(), vp.rend());
    ll ans=0;
    for(auto x:vp) {
//        cout << x.second << " " << x.first << endl;
        if(x.second==0||x.second==1){
            ans=max(ans,x.first*h);
        }
        else ans=max(ans,x.first*w);
    }
    cout<<ans<<endl;
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
