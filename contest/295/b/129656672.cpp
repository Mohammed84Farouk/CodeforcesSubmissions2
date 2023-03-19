/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(n) for(int i=1;i<=n;i++)
const int N=(int)5e2+7, mod=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
int arr[N];
ll sum[N];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int n;
    cin>>n;
    vector<vector<ll>>dis(n,vector<ll>(n,LOO));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>dis[i][j];
    for(int i=0;i<n;i++)
        cin>>arr[i],arr[i]--;
    for(int k=n-1;~k;k--){
        for (int u = 0; u < n; u++)
            for (int v = 0; v < n; v++)
                dis[u][v] = min(dis[u][v], dis[u][arr[k]] + dis[arr[k]][v]);
        for(int u=n-1;u>=k;u--)
            for(int v=n-1;v>=k;v--)
                sum[k]+=dis[arr[u]][arr[v]];/*cout<<dist[u][v]<<" "<<dis[u][v]<<endl;*/
    }
    for(int i=0;i<n;i++)
        cout<<sum[i]<<" ";
    return 0;
}
