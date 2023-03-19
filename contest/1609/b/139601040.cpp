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
const int N=2e5+5, M=27, mod=998244353, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
void solve() {
    int n, q,cnt=0;
    cin >> n >>q;
    string s;
    cin>>s;
    for(int i=0;i<n-2;i++)
        if(s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='c')
            cnt++;
    while(q--){
        int pos;
        char c;
        cin>>pos>>c;
        pos--;
        if(s[pos]==c){
            cout<<cnt<<'\n';
            continue;
        }
        bool flag= true;
        for(int i=max(0,pos-2);i<=pos;i++)
            if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c')
                cnt--;
        s[pos]=c;
        for(int i=max(0,pos-2);i<=pos;i++)
            if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c')
                cnt++;
        cout<<cnt<<'\n';
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
