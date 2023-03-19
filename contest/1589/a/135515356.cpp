/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     //works for integers
using namespace std;
typedef long long ll;
const int N=1e5+5, M=27, mod=1e9+7, OO=0x3f3f3f3f/*, sqr=320*/;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
int main() {
        FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
        int t;cin>>t;
        while(t--){
            ll x,y;
            int u,v;
            cin>>u>>v;
            y=1ll*v*v;
            x=1ll*u*u;
            cout<<-x<<" "<<y<<'\n';
        }
        return 0;
}
