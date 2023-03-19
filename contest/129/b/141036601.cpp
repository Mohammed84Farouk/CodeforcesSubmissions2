/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sIntBin(n) __builtin_popcount(n)     //works for integers
#define getUnique(e) {sort(e.begin(),e.end());e.erase(unique(e.begin(),e.end()),e.end());}
typedef long long ll;
const int N=1e2+9, M=1e7+6, mod=998244353, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-7;
void visualize(vector<set<int>>&graph, int n);

void solve() {
    int n,m,ans=0;
    cin>>n>>m;
    vector<set<int>>adj;
    set<int>st;
    adj.resize(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[--u].insert(--v);
        adj[v].insert(u);
        st.insert(u);
        st.insert(v);
    }
    bool flag=false;
    while(st.size()>1&&!flag){
        int cnt=0;
        vector<int>kick;
        set<int>from;
        for(auto u:st) {
            if(adj[u].size()==1){
                kick.push_back(u);
                from.insert(*adj[u].begin());
//                cout<<u<<" "<<*adj[u].begin()<<endl;
                cnt++;
            }
        }
//        visualize(adj,st.size());
        for(auto x:from){
            for(auto y:kick)
                if(adj[y].count(x)){
                    adj[y].erase(x);
                    adj[x].erase(y);
                }
        }
        if(cnt==0)
            flag=true;
        else ans++;
    }
    cout<<ans<<endl;
}

int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int testCases = 1;
//    cin>>testCases;
    while (testCases--)
        solve();
    return 0;
}

void visualize(vector<set<int>>&graph, int n){
    for(int edge=0;edge<n;edge++){
        cout<<edge<<": ";
        for(auto x:graph[edge])
            cout<<x<<" ";
        cout<<endl;
    }
}
