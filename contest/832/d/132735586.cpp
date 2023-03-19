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
const int N=1e5+5, M=1e1+5, mod=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
int n,m;
vector<vector<int>>anc,adj;
vector<int>depth;
int Log(int x){
    return 31-__builtin_clz(x);
}
void DFS(int u, int p){
    for(auto x : adj[u]){
        if(x==p) continue;
        depth[x]=depth[u]+1;
        anc[x][0]=u;
        for(int i=1; i<m; i++)
            anc[x][i] = anc[anc[x][i - 1]][i - 1];
        DFS(x,u);
    }
}
int k_anc(int u, int k){
    for(int i=0; i<m; i++)
        if(k & (1<<i))
            u = anc[u][i];
    return u;
}
int LCA(int u, int v){
    if(depth[u]<depth[v])
        swap(u,v);
    int k=depth[u]-depth[v];
    u=k_anc(u,k);
    if(u==v)
        return u;
    for(int i=m-1; i>=0; i--){
        if(anc[u][i]!=anc[v][i]){
            u=anc[u][i];
            v=anc[v][i];
        }
    }
    return anc[u][0];
}
int solve(int f, int s, int t) {
    int st = LCA(s, t), sf = LCA(s, f), tf = LCA(t, f);
    if(sf==f&&tf==f) return depth[st]-depth[f]+1;
    if(sf!=tf) return depth[f]-max(depth[sf],depth[tf])+1;
    return depth[st]+depth[f]-2*depth[sf]+1;    //OR -2*depth[tf] it's still fine.
}
int main() {
    FIO
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int q;
    cin>>n>>q;
    m = Log(n) + 1;
    adj.resize(n);
    depth.resize(n);
    anc = vector<vector<int>>(n, vector<int>(m));
    for (int i = 1; i <= n - 1; i++) {
        int u;
        cin >> u;
        adj[--u].push_back(i);
        adj[i].push_back(u);
    }
    int root = 0;
    anc[root][0] = root;
    depth[root] = 0;
    DFS(root, -1);
    while (q--) {
        int a[3],ans=1;
        cin >> a[0] >> a[1] >> a[2];
        sort(a,a+3);
        a[0]--,a[1]--,a[2]--;
        do{
            ans=max(ans, solve(a[0],a[1],a[2]));
        }while(next_permutation(a,a+3));
        cout<<ans<<'\n';
    }
    return 0;
}
