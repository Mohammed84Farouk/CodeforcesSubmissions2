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
const int N=4e5+5, M=1e1+5, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
set<int>st[26];
string s;
int q;
void build(){
    for(int i=0;i<s.size();i++)
        st[s[i]-'a'].insert(i);
}
void update(int idx, char c){
    char nC=s[idx];
    auto it=st[nC-'a'].find(idx);
    st[nC-'a'].erase(it);
    s[idx]=c;
    st[c-'a'].insert(idx);
}
int get(int l, int r){
    int ans=0;
    for(int i=0;i<26;i++){
        auto it=st[i].lower_bound(l);
        if(it!=st[i].end())
            ans+=(*it<=r);
    }
    return ans;
}
int main() {
    FAST;
    cin>>s;
    build();
    cin>>q;
    while(q--){
        int t;
        cin>>t;
        if(t==1){
            int indx;
            char c;
            cin>>indx>>c;
            update(indx-1, c);
        }
        else{
            int l, r; cin>>l>>r;
            cout<<get(l-1, r-1)<<'\n';
        }
    }
    return 0;
}