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
const int N=5e4+6, M=27, mod=998244353, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
vector<string>S;
void solve() {
    int c,p,s;
    cin>>c>>p>>s;
    for(int i=0;i<c;i++){
        string ss;
        cin>>ss;
        S.push_back(ss);
    }
    map<string, int>problems,ppl;
    for(int i=0;i<p;i++){
        string d;
        int x;
        cin>>d>>x;
        problems[d]=x;
    }
    while(s--){
        string user,cat,v;
        cin>>user>>cat>>v;
        if(v=="AC")
            ppl[user]+=problems[cat];
    }
    for(auto x:S)
        cout<<x<<" "<<ppl[x]<<endl;

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