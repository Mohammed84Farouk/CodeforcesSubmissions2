/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)2e5+7;
void sieve(int n);
int x,y,mx=INT_MAX,keep;
vector<vector<int>>graph(N);

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;x--,y--;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for(int i=0;i<n;i++)
        if(mx>graph[i].size())
        {
            keep=i;
            mx=graph[i].size();
        }
    vector<int>ans(n,1);
    ans[keep]=0;
    for(auto i:graph[keep])
        ans[i]=0;
    for(auto i:ans)
        cout<<i<<" ";
}
