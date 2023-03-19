/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     //works for integers
using namespace std;
typedef long long ll;
const int N=2e5+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
int n, m, zeros, numComponents;
vector<vector<int>>adj;
vector<int>arr(105);
bool vis[105];
set<int>lang;
void visualize()
{
    //system("CLS");
    for(auto x:lang) {
        cout<<x<<": ";
        for (int neighbor = 0; neighbor < adj[x].size(); neighbor++)
            cout << adj[x][neighbor] << " ";
        cout << endl;
    }
}
void dfs(int u){
    if(vis[u]) return;
    vis[u]=true;
    for(auto v:adj[u])
        if(!vis[v])
            dfs(v);
}
int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    cin>>n>>m;
    adj.resize(m);
    for(int j=0;j<n;j++){
        int l;
        cin>>l;
        if(l==0) zeros++;
        for(int i=0;i<l;i++) {
            cin>>arr[i];
            arr[i]--;
            adj[arr[i]].push_back(arr[i]);
            if (i) adj[arr[i]].push_back(arr[i-1]), adj[arr[i-1]].push_back(arr[i]);
            lang.insert(arr[i]);
        }
    }
    for(auto x:lang)
        if(!vis[x]) {
            numComponents++;
            dfs(x);
        }
//    visualize();
    if(numComponents) numComponents--;
    cout<<zeros+numComponents<<endl;
    return 0;
}