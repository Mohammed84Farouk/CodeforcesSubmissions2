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
const int N=3e4+5, M=1e3+5, mod=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
int n,d,cnt[N],mem[N][M];
bool vis[N][M];
int solve(int cur, int l){
    if(cur>=30001) return 0;
    if(vis[cur][l]) return mem[cur][l];
    vis [cur][l]=true;
    int op1=0,op2=0;
    if(l==1)
        op1=cnt[cur]+max(solve(cur+l,l),solve(cur+l+1,l+1));
    else
        op2=cnt[cur]+max({solve(cur+l, l),solve(cur+l+1,l+1),solve(cur+l-1,l-1)});
    return  mem[cur][l]=max(op1,op2);
}
int main() {
    FIO
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    cin>>n>>d;
    for(int i=0;i<n;i++){
        int p;cin>>p;
        cnt[p]++;
    }
    cout<<solve(d,d);
    return 0;
}
