/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     //works for integers
using namespace std;
typedef unsigned long long ll;
const int N=2e5+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
int n,m,cats[N],ans;
vector<int>numCats,res;
bool vis[N],consecutive;
vector<vector<int>>adj;
void dfs(int u){
    vis[u]=true;
    for(int v:adj[u]){
        if(!vis[v]&&numCats[u]<=m){
            if(cats[u]==1&&cats[v]==1)
                numCats[v]=numCats[u]+1;
            else numCats[v]=cats[v];
            dfs(v);
            if(adj[v].size()==1)   //it's a leaf
                if(numCats[v]<=m)
                    ans++;
        }
    }
}
int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    cin>>n>>m;
    adj.resize(n);
    numCats.resize(n);
    for(int i=0;i<n;i++) cin>>cats[i];
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[--u].push_back(--v);
        adj[v].push_back(u);
    }
    numCats[0]=cats[0];
    dfs(0);
    cout<<ans<<'\n';
    return 0;
}