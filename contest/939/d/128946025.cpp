/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)2e5+7, mod=1e9+7;
vector<int>parent;
vector<pair<char,char>>ans;
void visualize()
{
    system("CLS");
    //for(int node=1;node<=14/*max num you got*/;node++) {
      //  cout<<node<<": ";
        for (int i=0;i<26;i++) cout << parent[i] << " ";
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
    a= findParent(a), b= findParent(b);
    if(a!=b)
        parent[b]=a;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    parent.resize(26);
    iota(parent.begin(),parent.end(),0);
    string s,t;cin>>s>>t;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[i]) {
            int u=s[i]-'a',v=t[i]-'a';
            if (findParent(u)!= findParent(v)) {
                ans.push_back({s[i],t[i]});
                join(u, v);
            }
        }
    }
    cout<<ans.size()<<'\n';
    for(auto x:ans)
        cout<<x.first<<" "<<x.second<<'\n';
    return 0;
}
