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
const int N=1e5+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;

int main() {
    FAST;
    int t;
    cin>>t;
    while(t--){
        string k, s;
        cin>>k>>s;
        map<char,int>mp;
        for(int i=0;i<26;i++)
            mp[k[i]]=i+1;
        int ans=0;
        for(int i=1;i<s.size();i++)
            ans+=abs(mp[s[i]]-mp[s[i-1]]);
        cout<<ans<<'\n';
    }
    return 0;
}
