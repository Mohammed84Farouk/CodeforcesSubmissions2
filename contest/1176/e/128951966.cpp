/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)2e5+7, mod=1e9+7;
/*void visualize()
{
    system("CLS");
    //for(int node=1;node<=14;node++) {
      //  cout<<node<<": ";
        for (int i=0;i<26;i++) cout << parent[i] << " ";
        cout << endl;
    //}
}*/
vector<vector<int>>graph(N);
vector<int>ans[2];

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        graph.clear();
        int n,m;cin>>n>>m;
        graph=vector<vector<int>>(n);
        ans[0]=vector<int>(n/2);
        ans[1]=vector<int>(n/2);
        for(int i=0;i<m;i++) {
            int u, v;
            cin >> u >> v;
            u--, v--;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        //int x=0;
        queue<int>Q;
        vector<int>parity(n,-1),even,odd;
        //vector<bool>vis(n, false);
        Q.push(0);
        parity[0]=0;
        //vis[0]=true;
        while(!Q.empty()) {
            int u = Q.front();
            Q.pop();
            if(parity[u]%2==0)
                even.push_back(u+1);
            else odd.push_back(u+1);
            for (int v: graph[u])
                if(parity[v]==-1)
                {
                    parity[v]=!parity[u];
                    Q.push(v);
                    //vis[v] = true;
                    //x = x ^ 1;
                }
        }
        if(even.size()>odd.size())
            swap(even,odd);
        /*vector<int>ANS;
        for(int i=0;i<ans[0].size();i++)
            if(ans[0][i]!=0)
                ANS.push_back(ans[0][i]);
        cout<<ANS.size()<<endl;
        for(auto x:ANS)
            cout<<x<<" ";
        cout<<endl;
         */
        cout<<even.size()<<endl;
        for(auto x:even)
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
