/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)5e2+7, mod=1e9+7;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int a,b;cin>>a>>b;
        if(b==1)
            cout<<"NO"<<'\n';
        else {
            ll ans=(ll)a*b,ans2=a * (ll)(b + 1);
            cout << "YES" << '\n' << a << " " << ans << " " << ans2 << " " << '\n';

        }
    }
    return 0;
}









/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)5e2+7, mod=1e9+7;
vector<int>parent,sz;
int n,q;
void visualize()
{
    //system("CLS");
    //cout<<node<<": ";
    for (int neighbor=0;neighbor<parent.size();neighbor++)
        cout << parent[neighbor] +1<< " ";
    cout << endl;

}
int findParent(int node)    // O(1)
{
    if(node == parent[node]) return node;  //you've reached the dominant parent
    return parent[node]=findParent(parent[node]); //updating the node's parent
    // with a new parent.
}
void join(int a,int b)      // O(1)
{
    a = findParent(a);
    b = findParent(b);
    if(a!=b)
    {
        if(sz[a]>sz[b])
            swap(a,b);
        parent[a]=b;
        sz[b]+=sz[a];
    }
}
int main() {
    cin>>n>>q;
    parent.resize(n);
    iota(parent.begin(),parent.end(),0);
    sz=vector<int>(n,1);
    while(q--)
    {
        //cout<<endl;
        int t,u,v;
        cin>>t>>u>>v;
        u--;
        v--;
        if(t==1)
            join(u,v);
        else{
            if(findParent(u) == findParent(v))
                cout<<"there is a path."<<endl;
            else cout<<"there is no path."<<endl;
        }
        visualize();
        //cout<<"here is the graph:\n";
    }
    cout<<endl;
    visualize();
    return 0;
}*/
/*

 13 14
 1 1 2
 1 1 5
 1 2 6
 1 2 7
 1 3 4
 1 3 8
 1 8 9
 1 9 10
 1 4 11
 1 11 12
 1 11 13
 2 4 7
 1 1 3
 2 4 7

*/

/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*//*

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)15e4+7, mod=1e9+7;
int n;
vector<vector<int>>graph(N);
vector<bool>vis(N);
void visualize()
{
    system("CLS");
    for(int node=1;node<=5;node++) {
      cout<<node<<": ";
    for (auto i:graph[node]) cout << i << " ";
    cout << endl;
    }
}
int dfs(int u)
{
    vis[u]=true;
    for(int v:graph[u])
        if(!vis[v])
            dfs(v);
        else return u;
}
void DFS(int u)
{
    cout<<u<<" ";
    vis[u]=true;
    for(auto v:graph[u])
        if(!vis[v])
            DFS(v);
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int x,y;cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    visualize();
    int node=dfs(1);
    vis=vector<bool>(N,false);
    DFS(node);
    return 0;
}
*/
