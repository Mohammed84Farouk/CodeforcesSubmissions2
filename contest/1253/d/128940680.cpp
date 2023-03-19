/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)2e5+7, mod=1e9+7;
vector<int>parent,sz;
int n,m,ans;
void visualize()
{
    system("CLS");
    //for(int node=1;node<=14/*max num you got*/;node++) {
      //  cout<<node<<": ";
        for (int neighbor: parent) cout << neighbor << " ";
        cout << endl;
    //}
}

int findParent(int u)
{
    if(u==parent[u]) return u;
    return parent[u]=findParent(parent[u]);
}

void join(int a,int b)
{
    a=findParent(a),b=findParent(b);
    if(a!=b)
        parent[b]=parent[a]=max(a,b);
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    parent.resize(n);
    iota(parent.begin(),parent.end(),0);
    for(int i=0;i<m;i++)
    {
        int u,v;cin>>u>>v;
        join(--u,--v);
    }
    for(int i=0;i<n;)
    {
        if(i!=findParent(i)) // we're connected to others
        {
            for(int j=i+1;j<=findParent(i);j++) {
                if (findParent(j) != findParent(i)) {
                    ans++;
                    join(i, j);
                }
            }
        }
        i=max(i+1, findParent(i));
    }
    cout<<ans<<'\n';
    return 0;
}