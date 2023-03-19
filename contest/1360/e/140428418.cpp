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
const int N=1e5+9, M=1e9+6, mod=998244353, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
string s[54];
int dp[54][54];
int n;
bool check(int i, int j){
    if(i==n-1||j==n-1) return true;
    if(~dp[i][j]) return dp[i][j];
    int path1=(i+1<n&&s[i+1][j]=='1')? check(i+1,j):0;
    int path2=(j+1<n&&s[i][j+1]=='1')? check(i,j+1):0;
    return dp[i][j]=path1|path2;
}

void solve() {
    memset(dp,-1,sizeof dp);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>s[i];
    bool flag=false;
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1;j++)
            if(s[i][j]=='1') {
                dp[i][j]=check(i,j);
                if(dp[i][j]==0)
                    flag=true;
            }
    if(!flag) cout<<"YES\n";
    else cout<<"NO\n";

}

int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int tt=1;
    cin>>tt;
    while(tt--)
        solve();
    return 0;
}