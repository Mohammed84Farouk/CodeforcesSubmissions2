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
const int N=2e3+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
int n, p,mx,cnt=1,mxCnt=1;
bool vis[N];
vector<vector<int>>graph;
vector<int>parent;
void visualize(){
    for(int edge=0;edge<n;edge++){
        cout<<edge<<": ";
        for(auto x:graph[edge])
            cout<<x<<" ";
        cout<<endl;
    }
}
int dfs(int u) {
    vis[u] = true;
    for (auto v: graph[u]) {
        if (!vis[v]) {
            cnt++;
//            cout<<cnt<<" v = "<<v<<" u = "<<u<<endl;
            mxCnt = max(mxCnt,cnt);
//            cout << v << " your maxCout is: "<<mxCnt<<" ";
            dfs(v);
            cnt--;
        }
//        cout<<endl;
    }
    return mxCnt;
}

int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    cin>>n;
    graph.resize(n);
    for(int i=0;i<n;i++){
        cin>>p;
        if(p==-1) graph[i].push_back(i), parent.push_back(i);
        else graph[i].push_back(--p),graph[p].push_back(i);
    }
//    visualize();
    for(int i:parent){
        cnt = 1;
        mx = max(mx, dfs(i));
    }
    cout<<mx<<'\n';
    return 0;
}
