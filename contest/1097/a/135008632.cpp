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
string s,t[5];
int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    cin>>s;
    bool flag=false;
    for(int i=0;i<5;i++){
        cin>>t[i];
        if(t[i][0]==s[0]||t[i][1]==s[1])
            flag=true;
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}