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
const int N=1e6+6, M=27, mod=998244353, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
int ns,nb,nc,pb,ps,pc,B=0,S=0,C=0;
string s;
ll r;
ll price(ll x){
    ll b=max(1ll*0,B*x-nb);
    ll ss=max(1ll*0,S*x-ns);
    ll c=max(1ll*0,C*x-nc);
    return (b*pb+ss*ps+c*pc);
}
void solve() {
    cin>>s;
    for(char c:s)
        if(c=='B') B++;
        else if(c=='S') S++;
        else C++;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;
    ll st=0,e=1e14,mid,ans;
    while(st<=e){
        mid=(st+e)>>1;
        ll p= price(mid);
        if(p==r){
            cout<<mid;
            return;
        }
        else if(p>r) e=mid-1;
        else st=mid+1,ans=mid;
    }
    cout<<ans;
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
