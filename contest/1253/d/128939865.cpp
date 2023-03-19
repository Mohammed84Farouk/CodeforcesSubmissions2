/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)2e5+7, mod=1e9+7;
vector<int>parent,mx(N,INT_MIN),mn(N,INT_MAX),sz;
int n,m,ans;
void visualize()
{
    system("CLS");
    //for(int node=1;node<=14/*max num you got*/;node++) {
      //  cout<<node<<": ";
        for (int neighbor: parent) cout << neighbor << ": "<<mn[neighbor]<<" "<<mx[neighbor]<<endl;
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
    if(a!=b){
        if(a>b)
            swap(a,b);
        mn[a]=min(mn[b],mn[a]);
        mx[a]=max(mx[b],mx[a]);
        parent[b]=a;
    }
}

int main() {
    cin>>n>>m;
    parent.resize(n);
    mx.resize(n,INT_MIN);
    mn.resize(n,INT_MAX);
    sz=vector<int>(n,1);
    iota(parent.begin(),parent.end(),0);
    iota(mx.begin(),mx.end(),0);
    iota(mn.begin(),mn.end(),0);
    for(int i=0;i<m;i++)
    {
        //visualize();
        int u,v;cin>>u>>v;
        join(--u,--v);
    }
    for(int i=0;i<n;i++)
    {
        if(i!=findParent(i)) // we're connected to others
        {
            //cout<<"we entered with i= "<<i<<" "<<mn[findParent(i)]<<" "<<mx[findParent(i)]<<endl;
            for(int j=mn[findParent(i)];j<=mx[findParent(i)];j++) {
                if (findParent(j) != findParent(i)) {
                    ans++;
                    join(i, j);
                    i=max(i,mx[findParent(j)]-1);
                }
            }
        }
    }
    //cout<<endl;
    //visualize();
    cout<<ans<<endl;
    return 0;
}
/*
14 8
1 2
2 7
3 4
6 3
5 7
3 8
6 8
11 12
 */