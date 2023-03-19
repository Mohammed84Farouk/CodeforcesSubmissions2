/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sIntBin(n) __builtin_popcount(n)     //works for integers
#define getUnique(v) {sort(v.begin(),v.end());v.erase(unique(v.begin(),v.end()),v.end());}
using namespace std;
typedef long long ll;
const int N=1e5+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
vector<vector<int>>adj;
vector<int>recColor;
set<int>c[3];
vector<bool>vis;
bool flag;
void dfs(int u, int color=2){
    vis[u]=true;
    c[color].insert(u);
    recColor[u]=color;
    for(int v:adj[u]){
        if(!vis[v]){
            c[3-color].insert(v);
            recColor[v]=3-color;
            dfs(v,3-color);
        }
    }
}
void solve() {
    int n,m;
    cin>>n>>m;
    adj.resize(n+1);
    vis.resize(n+1,false);
    recColor.resize(n+1);
    while(m--){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1;i<=n;i++)
    	if(!vis[i])
    		dfs(i);
    for(int i=1;i<=n&&!flag;i++){
        for(int j:adj[i])
            if(recColor[j]==recColor[i]){
                flag= true;
                break;
            }
    }
    if(flag) cout<<"-1";
    else{
        cout<<c[1].size()<<"\n";
        for(int x:c[1])
            cout<<x<<" ";
        cout<<"\n"<<c[2].size()<<"\n";
        for(int x:c[2])
            cout<<x<<" ";
    }
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
