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
int op,n,d,cnt[N],mem[N][M];
bool vis[N][M];
int solve(int cur, int l){
    if(cur>=30001) return 0;
    if(vis[cur][l]) return mem[cur][l];
    vis [cur][l]=true;
    if(l==1)
        op=cnt[cur]+max(solve(cur+l,l),solve(cur+l+1,l+1));
    else
        op=cnt[cur]+max({solve(cur+l, l),solve(cur+l+1,l+1),solve(cur+l-1,l-1)});
    return  mem[cur][l]=op;
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





/*
// in case you want the maximum range of the same gcd value :").
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     //works for integers
using namespace std;
typedef long long ll;
const int N=2e5+5, M=1e1+5, mod=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
vector<int>arr;
vector<vector<int>>table;
int n;
int Log(int x){
    return 31-__builtin_clz(x);
}
int buildTable(){
    int mxj=0,ans=1,freq,lstgdc=-1;
    for(int j=1;j<=Log(n);j++) {
        freq = 0;
        for (int i = 0; i <= n - (1 << j); i++) {
            table[i][j] = __gcd(table[i][j - 1], table[i + (1 << (j - 1))][j - 1]);
            if (table[i][j] > 1 && j > mxj) {
                mxj = j;
                freq++;
                lstgdc = table[i][j];
            } else if (table[i][j] > 1 && table[i][j] != lstgdc && j == mxj) {
                lstgdc = table[i][j];
                freq = 1;
            } else if (table[i][j] > 1 && table[i][j] == lstgdc && j == mxj)
                freq++;
            else
                freq = 0;
            ans = max(ans, (1 << mxj) + freq - 1);
        }
    }
    return ans;
}
int main() {
    FIO
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t;cin>>t;
    while(t--){
        cin>>n;
        table=vector<vector<int>>(n,vector<int>(Log(n)+1));
        for(int i=0;i<n;i++)
            cin>>table[i][0];
        cout<<buildTable()<<endl;
    }
    return 0;
}
 */