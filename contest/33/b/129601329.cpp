/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=(int)5e2+7, mod=1e9+7, OO=0x3f3f3f3f;
const ll lOO=0x3f3f3f3f3f3f3f3f;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    string s,t,S;cin>>s>>t;
    S=s;
    int n;cin>>n;
    bool OK=false;
    if(s.size()==t.size()) OK=true;
    vector<vector<int>>dis(N,vector<int>(N,OO));
    for(int i=0;i<n;i++){
        char a,b;
        int w;
        cin>>a>>b>>w;
        if(OK)
            dis[a - 'a'][b - 'a'] = min(dis[a - 'a'][b - 'a'], w);
    }
    for(int i=0;i<26;i++) dis[i][i]=0;
    for (int k = 0; k < 30; k++)
        for (int u = 0; u < 30; u++)
            for (int v = 0; v < 30; v++)
                dis[u][v] = min(dis[u][v], dis[u][k] + dis[k][v]);
    if(OK) {
        string ans="";int sum=0;bool flag=false;
        for (int i = 0; i < s.size(); i++) {
            int mn = OO;char c;
            if (s[i] != t[i]) {
                for(char j='a';j<='z';j++)
                {
                    if(dis[s[i]-'a'][j-'a']+dis[t[i]-'a'][j-'a']<mn)
                    {
                        mn=dis[s[i]-'a'][j-'a'] + dis[t[i]-'a'][j-'a'];
                        c=j;
                    }
                }
                sum+=mn;
                S[i]=c;
                if(mn==OO) return cout<<-1,0;
            }
        }
        cout<<sum<<'\n'<<S<<'\n';
    }
    else cout<<-1<<'\n';
    return 0;
}