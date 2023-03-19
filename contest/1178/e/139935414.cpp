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
const int N=1e3+9, M=1e9+6, mod=998244353, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
 
void solve() {
    string s;
    cin>>s;
    string ans="";
    int i=0,n=s.size()-1;
    while(n-i>=3){
        if(s[i]==s[n]){
            ans.push_back(s[i]);
            i++,n--;
        }
        else if(s[i]==s[n-1]){
            ans.push_back(s[i]);
            i++,n-=2;
        }
        else if(s[i+1]==s[n]){
            ans.push_back(s[i+1]);
            i+=2,n--;
        }
        else if(s[i+1]==s[n-1]){
            ans.push_back(s[i+1]);
            i+=2,n-=2;
        }
    }
    if(ans.size()==0) cout<<s[0]<<endl;
    else{
       if(s[i]==s[n]){
           if(i==n){
               ans.push_back(s[i]);
               cout<<ans;
               ans.pop_back();
               std::reverse(ans.begin(), ans.end());
               cout<<ans;
           } else{
               ans.push_back(s[i]);
               cout<<ans;
               std::reverse(ans.begin(), ans.end());
               cout<<ans;
           }
       } else{
           ans.push_back(s[i]);
           cout<<ans;
           ans.pop_back();
           std::reverse(ans.begin(), ans.end());
           cout<<ans;
       }
    }
//     cout<<i<<" "<<n<<" "<<ans<<endl;
 
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
