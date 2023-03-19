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

void solve(){
    int n;
    cin>>n;
    string s;
    map<char,int>c1,c2,freq;
    for(int i=0;i<n;i++){
        cin>>s;
        freq[s[0]]++;
        if(freq[s[0]]&1) c1[s[0]]++;
        else c2[s[0]]++;
    }
    ll ans=0;
    for(auto x:c1){
        ll cnt=x.second;
        ans+=(cnt-1)*cnt/2;
    }
    for(auto x:c2){
        ll cnt=x.second;
        ans+=(cnt-1)*cnt/2;
    }
    cout<<ans<<endl;
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
