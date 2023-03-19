/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sIntBin(n) __builtin_popcount(n)     //works for integers
#define getUnique(v) {sort(v.begin(),v.end());v.erase(unique(v.begin(),v.end()),v.end());}
typedef long long ll;
const int N=2e5+6, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
vector<int>parent,enemy;
int findParent(int u){
    if(parent[u]==u) return u;
    return parent[u]= findParent(parent[u]);
}
void join(int a,int b){
    a= findParent(a);
    b= findParent(b);
    if(a!=b)
        parent[a]=b;
}
void solve() {
    int n,m;
    cin>>n>>m;
    parent.clear();
    parent.resize(n+1);
    enemy=vector<int>(n+1,0);
    for(int i=0;i<=n;i++)
        parent[i]=i;
    while(m--){
        int x,y;
        cin>>x>>y;
        if(findParent(x)!= findParent(y)) {
            cout << "YES\n";
            if(!enemy[x]) enemy[x]=y;
            if(!enemy[y]) enemy[y]=x;
            join(x,enemy[y]);
            join(y,enemy[x]);
        }
        else cout<<"NO\n";
    }
}

int main() {
    FAST;
    freopen("meciul.in","r",stdin);
    freopen("meciul.out","w",stdout);
    int tt=1;
    cin>>tt;
    while(tt--)
        solve();
    return 0;
}

/*
vector<vector<int>>graph;
void visualize(int n){
    for(int edge=0;edge<n;edge++){
        cout<<edge<<": ";
        for(auto x:graph[edge])
            cout<<x<<" ";
        cout<<endl;
    }
}
*/