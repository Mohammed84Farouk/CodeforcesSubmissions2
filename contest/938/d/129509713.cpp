/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const int N=(int)2e5+7, mod=1e9+7;
ll OO=0x3f3f3f3f3f3f3f3f;
int n,m,arr[N];
vector<vector<pair<ll,int>>>adj(N);
ll dis[N];
void dijkstra()
{
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>>q;
    for(int i=0;i<n;i++) q.push({dis[i],i});
    while(!q.empty())
    {
        int u=q.top().second;
        ll c=q.top().first;
        q.pop();
        if(c>dis[u]) continue;
        for(auto p:adj[u])
        {
            int v=p.second; ll vc=p.first;
            if(dis[v]>dis[u]+vc)
            {
                dis[v]=dis[u]+vc;
                q.push({dis[v],v});
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        ll c;
        cin>>u>>v>>c;
        adj[--u].push_back({c*2,--v});
        adj[v].push_back({c*2,u});
    }
    for(int i=0;i<n;i++)
        cin>>dis[i];
    dijkstra();
    for(int i=0;i<n;i++)
        cout<<dis[i]<<" ";
    return 0;
}
