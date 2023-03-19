/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     //works for integers
using namespace std;
typedef long long ll;
const int N=2e5+5, M=1e1+5, mod=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;

vector<vector<int>>edge;
vector<bool>vis;
int n,m;
int main() {
    FIO
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vis=vector<bool>(n+1,false);
        edge.clear();
        edge.resize(n+1);
        for(int i=0;i<m;i++) {
            int a, b, c;
            cin >> a >> b >> c;
            vis[b]=true;
        }
        int node=0;
        for(int i=1;i<=n&&!node;i++)
            if(!vis[i]) node=i;
        for(int i=1;i<=n;i++)
            if(i!=node)
                cout<<node<<" "<<i<<endl;
//        visualize();
    }
    return 0;
}