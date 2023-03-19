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
int n, m, zeros;
vector<vector<int>>adj;
vector<int>arr(105);
vector<int>parent;
unordered_set<int>lang;
int findParent(int u){
    if(parent[u]==u)return u;
    return parent[u]= findParent(parent[u]);
}
void join(int a, int b){
    a= findParent(a);
    b= findParent(b);
    if(a!=b) parent[a]=b;
}
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
int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    cin>>n>>m;
    adj.resize(m);
    parent.resize(m);
    iota(parent.begin(),parent.end(),0);
    for(int j=0;j<n;j++){
        int l;
        cin>>l;
        if(l==0) zeros++;
        for(int i=0;i<l;i++) {
            cin>>arr[i];
            arr[i]--;
            if (i) join(arr[i],arr[i-1]);
            lang.insert(arr[i]);
        }
    }
    unordered_set<int>components;
    for(auto x:lang)
        components.insert(findParent(x));
//    visualize();
    int sub=0;
    if(components.size()) sub=1;
    cout<<zeros+components.size()-sub<<endl;
    return 0;
}
