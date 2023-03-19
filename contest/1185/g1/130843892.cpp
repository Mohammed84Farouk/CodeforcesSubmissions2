//https://vjudge.net/problem/UVA-10075
// IN THE NAME OF ALLAH, NOW SOLVING DP PROBLEMS.
/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     //works for integers
using namespace std;
typedef long long ll;
const int N=3e1+5, M=1e1+5, mod=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
int n,T,g[20],t[20],mem[230][1<<15][5];//[lenght till T][mask][genre]
int solve(int sum, int mask, int lst){
    if(sum==T) return 1;
    if(sum>T) return 0;
    //if(mask==(1<<n)-1) return 0;
    if(~mem[sum][mask][lst]) return mem[sum][mask][lst];
    int ret=0;
    for(int nxt=0;nxt<n;nxt++)
    {
        if(mask&(1<<nxt)) continue;
        if(lst!=g[nxt])
            ret=(ret+solve(sum+t[nxt],mask|(1<<nxt),g[nxt]))%mod;
    }
    return mem[sum][mask][lst]=ret;
}
int main() {
    FIO
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    cin>>n>>T;
    for(int i=0;i<n;i++)
        cin>>t[i]>>g[i];
    memset(mem,-1,sizeof mem);
    cout<<solve(0,0,4);
    return 0;
}