/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)2e5+7, mod=1e9+7;
/*void visualize()
{
    system("CLS");
    //for(int node=1;node<=14;node++) {
      //  cout<<node<<": ";
        for (int i=0;i<26;i++) cout << parent[i] << " ";
        cout << endl;
    //}
}*/
vector<vector<int>>graph(N);
vector<int>ans[2];
vector<int>parent,sz;
int findParent(int u)
{
    if(u==parent[u])return u;
    return parent[u]= findParent(parent[u]);
}
bool join(int a,int b) {
    a = findParent(a);
    b = findParent(b);
    if (a == b)
        return false;
    if (sz[a] < sz[b])
        swap(a, b);
    sz[b] += sz[a];
    parent[a] = b;
    return true;
}
void dfs(int node,int parent,int parity)
{
    ans[parity].push_back(node+1);
    for(auto &v:graph[node])
        if(v!=parent)
            dfs(v,node,parity^1);
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        graph.clear();parent.clear();sz.clear();
        int n,m;cin>>n>>m;
        graph=vector<vector<int>>(n);
        sz.resize(n,1);
        ans[0]=vector<int>(n);
        ans[1]=vector<int>(n);
        parent.resize(n);
        iota(parent.begin(),parent.end(),0);
        for(int i=0;i<m;i++)
        {
            int u,v;cin>>u>>v;
            u--,v--;
            if(join(u,v))
            {
                graph[u].push_back(v);
                graph[v].push_back(u);
            }
        }
        dfs(0,0,0);
        /*
        int x=1;
        queue<int>Q;
        vector<bool>vis(N);
        Q.push(0);
        vis[0]=true;
        while(!Q.empty())
        {
            int u=Q.front();
            ans[x].push_back(u);
            Q.pop();
            for(int v:graph[u])
            if(!vis[v]){
                Q.push(v);
                vis[v]=true;
            }
            x^=1;
        }
         */
        if(ans[0].size()>ans[1].size())
            swap(ans[0],ans[1]);
        vector<int>ANS;
        for(int i=0;i<ans[0].size();i++)
            if(ans[0][i]!=0)
                ANS.push_back(ans[0][i]);
        cout<<ANS.size()<<endl;
        for(auto x:ANS)
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
