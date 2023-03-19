// IN THE NAME OF ALLAH, NOW SOLVING DP PROBLEMS.
/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e3+7, M=2e2+7, mod=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
ll mem[N][N];
int n,k;
ll solve(int i, int len) {
    if(len==k) return 1;
    if(~mem[i][len]) return mem[i][len];
    ll ans=0;
    for(int j=i;j<=n;j+=i)
        ans= (ans+solve(j,len+1))%mod;
    return mem[i][len]=ans;
}

int main() {
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    memset(mem,-1,sizeof mem);
    cin>>n>>k;
    cout<<solve(1,0);
}