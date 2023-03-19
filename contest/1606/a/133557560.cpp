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
const int N=1e3+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
int main() {
    FAST;
    int t, arr[N];
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ab=0,ba=0;
        for(int i=0;i<s.size();i++)
            if(s[i]=='a'&&s[i+1]=='b')
                ab++;
            else if(s[i]=='b'&&s[i+1]=='a')
                ba++;
        if(ab==ba) cout<<s<<'\n';
        else if(ab>ba){
            s[s.size()-1]='a';
            cout<<s<<'\n';
        }
        else{
            s[s.size()-1]='b';
            cout<<s<<'\n';
        }
    }
    return 0;
}
