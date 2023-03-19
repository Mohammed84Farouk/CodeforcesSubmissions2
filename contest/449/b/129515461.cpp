// DSA
/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=(int)2e5+7, mod=1e9+7;
const ll OO=0x3f3f3f3f3f3f3f3f;
int n,m,k;
vector<vector<pair<pair<ll,bool>,int>>>adj;
vector<ll>dis;
void dijkstra(int src)
{
    dis=vector<ll>(n,OO);
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>>q;
    dis[src]=0;
    q.push({0,src});
    while(!q.empty())
    {
        int u=q.top().second;
        ll c=q.top().first;
        q.pop();
        if(c!=dis[u]) continue;
        for(auto p:adj[u])
        {
            int v=p.second; ll vc=p.first.first;
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
    cin>>n>>m>>k;
    adj.resize(n);
    for(int i=0;i<m;i++)
    {
        int u,v;
        ll c;
        cin>>u>>v>>c;
        adj[--u].push_back({{c,0},--v});
        adj[v].push_back({{c,0},u});
    }
    for(int i=0;i<k;i++)
    {
        int u,c;
        cin>>u>>c;
        adj[0].push_back({{c,1},--u});
        adj[u].push_back({{c,1},0});
    }
    dijkstra(0);
    vector<bool>usedRoad(n,0),usedTrain(n,0);
    for(int i=0;i<n;i++)
        for(auto p:adj[i])
        {
            int v=p.second; ll vc=p.first.first;
            bool isTrain=p.first.second;
            if(dis[v]==dis[i]+vc)
            {
                usedTrain[v]=usedTrain[v]||isTrain;
                usedRoad[v]=usedRoad[v]||!isTrain;
            }
        }
    int ans=0;
        for(int i=0;i<n;i++)
            if(usedTrain[i]&&!usedRoad[i])
                ans++;
    cout<<k-ans<<'\n';
    return 0;
}
