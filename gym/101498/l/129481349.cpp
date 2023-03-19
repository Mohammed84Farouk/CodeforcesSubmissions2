/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=(int)1e3+7, mod=1e9+7;
const ll OO=0x3f3f3f3f3f3f3f3f;
#define cost first
#define from second.first
#define to second.second
int n,m;
vector<pair<int,pair<int,int>>>edges;

ll bellman()
{
    vector<ll>dis(n,0);
    bool hasCycle=false;
    for(int i=0;i<=n-1;i++)
    {
        bool isUpdated=false;
        for(auto e:edges){
            if(dis[e.to]>dis[e.from]+e.cost)
            {
                dis[e.to]=dis[e.from]+e.cost;
                isUpdated=true;
            }
        }
        if(!isUpdated) break;
        else if(i==n-1) hasCycle=true;
    }
    if(hasCycle) return -OO;
    ll ans=OO;
    for(int i=0;i<n;i++)
        ans=min(ans,dis[i]);
    return ans;
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;cin>>t;
    while(t--){
        edges.clear();
        ll mn=OO;
        cin >> n >> m;
        edges.resize(n);
        for (int i = 0; i < m; i++) {
            int u, v, c;
            cin >> u >> v >> c;
            edges.push_back({c, {--u, --v}});
            mn=min(mn,(ll)c);
        }
        ll ans= bellman();
        if(ans==-OO) cout<<"-inf"<<'\n';
        else if(ans<0) cout<<ans<<'\n';
        else cout<<mn<<'\n';
    }
    return 0;
}
