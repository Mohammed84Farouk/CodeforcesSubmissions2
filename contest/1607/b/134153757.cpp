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
        ll x,n,added;
        cin>>x>>n;
        if(n%4==0) added=0;
        else if(n%4==1) added=-n;
        else if(n%4==2) added=1;
        else if(n%4==3) added=n+1;
        added*=-1;
        if(x&1) cout<<x+added<<'\n';
        else cout<<x-added<<'\n';
    }
    return 0;
}
