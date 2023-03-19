/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=(int)5e2+7, mod=1e9+7;
ll OO=0x3f3f3f3f3f3f3f3f;

int n,m;
vector<vector<pair<int,int>>>adj;
vector<int>parent;

bool dijkstra(int src, int tar){
    vector<ll>dis(n,OO);
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>>q;
    dis[src]=0;
    q.push({src,0});
    while(!q.empty())
    {
        ll c=q.top().first;
        int u=q.top().second;
        q.pop();
        if(u==tar) return true;
        if(c!=dis[u]) continue;
        for(auto p:adj[u])
        {
            int v=p.second;
            ll vc=p.first;
            if(dis[v]>dis[u]+vc)
            {
                dis[v]=dis[u]+vc;
                q.push({dis[v],v});
                parent[v]=u;
            }
        }
    }
    return false;
}


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    cin>>n>>m;
    adj.resize(n);
    parent.resize(n,-1);
    for(int i=0;i<m;i++)
    {
        int u,v,c;cin>>u>>v>>c;
        adj[--u].push_back({c,--v});
        adj[v].push_back({c,u});
    }
    if(dijkstra(0,n-1)) {
        int x = n - 1;
        vector<int>ans;
        while (x != -1) {
            ans.push_back(x+1);
            x = parent[x];
        }
        std::reverse(ans.begin(), ans.end());
        for(int x:ans)
            cout<<x<<" ";
    }
    else cout<<-1<<'\n';
    return 0;
}
