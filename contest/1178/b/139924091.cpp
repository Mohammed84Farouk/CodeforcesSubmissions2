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
const int N=1e9+6, M=1e9+6, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;

void solve() {
    string s;
    cin>>s;
    deque<char>dq;
    for(int i=0;i<s.size();i++)
        if(s[i]=='v'&&s[i+1]=='v')
            dq.push_back('w');
        else if(s[i]=='o') dq.push_back(s[i]);
    for(;!dq.empty()&&dq.front()!='w';)
        dq.pop_front();
    for(;!dq.empty()&&dq.back()!='w';)
        dq.pop_back();
//    for(char c:dq) cout<<c;
    vector<ll>w(dq.size(),0);
    for(int i=0;i<dq.size();i++){
        if(i) w[i]=w[i-1]+(dq[i]=='w');
        else w[i]=(dq[i]=='w');
    }
    ll sumW;
    if(!w.empty()) sumW=w[w.size()-1];
    ll ans=0;
    for(int i=0;i<dq.size();i++){
        if(dq[i]=='o'){
            ll wl=w[i],oo=0;
            int j;
            for(j=i;dq[j]!='w';j++)
                oo++;
            i=j-1;
            ans+=(sumW-wl)*wl*oo;
        }
    }
    cout<<ans<<endl;
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
