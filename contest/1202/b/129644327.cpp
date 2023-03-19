/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(n) for(int i=1;i<=n;i++)
const int N=(int)1e2+7, mod=1e9+7, OO=0x3f3f3f3f;
const ll lOO=0x3f3f3f3f3f3f3f3f;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    string s;cin>>s;
    for(int x=0;x<10;x++)
    {
        for(int y=0;y<10;y++)
        {
            vector<vector<int>>dis(10,vector<int>(10,OO));
            //keep tracking of distance, we can reach any i-x last digit in cost of 1.
            for(int i=0;i<10;i++) {
                dis[i][(i + x) % 10] = 1;
                dis[i][(i + y) % 10] = 1;
            }
            for(int k=0;k<10;k++)
                for(int u=0;u<10;u++)
                    for(int v=0;v<10;v++)
                        dis[u][v]=min(dis[u][v],dis[u][k]+dis[k][v]);
            int sum=0;
            for(int i=0;i<s.size()-1&&sum!=-1;i++)
            {
                if(dis[s[i]-'0'][s[i+1]-'0']!=OO)
                    sum+=dis[s[i]-'0'][s[i+1]-'0']-1;
                else sum=-1;
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
