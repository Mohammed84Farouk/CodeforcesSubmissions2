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
 
void solve() {
    string s;
    cin>>s;
    if(s.size()&1){
        cout<<"NO\n";
        return;
    }
    for(int i=0,j=s.size()/2;i<s.size()/2;i++,j++)
        if(s[i]!=s[j]){
            cout<<"NO\n";
            return;
        }
    cout<<"YES\n";
}
 
int main() {
    FAST;
//    freopen("input.txt","r",stdin);
    int tt=1;
    cin>>tt;
    while(tt--)
        solve();
    return 0;
}
