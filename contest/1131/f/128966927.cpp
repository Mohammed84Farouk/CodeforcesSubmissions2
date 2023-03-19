/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)15e4+7, mod=1e9+7;
int n;
vector<int>parent,nxt,lst;
/*void visualize()
{
    system("CLS");
    for(int node=1;node<=5;node++) {
      cout<<node<<": ";
    for (auto i:graph[node]) cout << i << " ";
    cout << endl;
    }
}*/
int findParent(int u)
{
    if(u==parent[u])return u;
    return parent[u]=findParent(parent[u]);
}
void join(int a,int b)
{
    a=findParent(a);
    b=findParent(b);
    if(a!=b)
    {
        parent[b]=a;
        nxt[lst[a]]=b;
        lst[a]=lst[b];
    }
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    parent.resize(n);
    iota(parent.begin(),parent.end(),0);
    nxt=vector<int>(n,-1);
    lst.resize(n);
    iota(lst.begin(),lst.end(),0);
    for(int i=0;i<n-1;i++)
    {
        int x,y;cin>>x>>y;
        join(--x,--y);
    }
    int node=findParent(0);
    while(node!=-1)
    {
        cout<<node+1<<" ";
        node=nxt[node];
    }
    //cout<<'\n';
    //visualize();
    //dfs(n);
    //cout<<node<<endl;
    //vis=vector<bool>(N,false);
    //DFS(node);
    return 0;
}
