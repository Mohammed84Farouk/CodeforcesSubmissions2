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
const int N=2e6+9, M=1e9+6, mod=998244353, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
pair<int,int>p[2][N];
vector<bool>ans;
vector<vector<int>>adj;
void dfs(int u){
    if(ans[u]) return;
    ans[u]=true;
    for(auto v:adj[u])
        dfs(v);
}
void solve() {
    int n;
    cin>>n;
    ans=vector<bool>(n,false);
    adj.clear();
    adj.resize(n);
    for(int i=0;i<n&&cin>>p[0][i].first;i++) p[0][i].second=i;
    for(int i=0;i<n&&cin>>p[1][i].first;i++) p[1][i].second=i;
    std::sort(p[0], p[0]+n);
    std::sort(p[1], p[1]+n);
    for(int i=0;i<n-1;i++){
        adj[p[0][i].second].push_back(p[0][i+1].second);
        adj[p[1][i].second].push_back(p[1][i+1].second);
    }
    dfs(p[0][n-1].second);
    dfs(p[1][n-1].second);
    for(auto xx:ans) cout<<xx;
    cout<<endl;
}

int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int testCases=1;
    cin>>testCases;
    while(testCases--)
        solve();
    return 0;
}
