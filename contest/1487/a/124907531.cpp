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

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("help.in","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;cin>>t;
    while(t--)
    {
        vector<int>v;
        map<int,int>mp;
        int n,ans=0;cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            v.push_back(x);
            mp[x]++;
        }
        sort(v.begin(),v.end());
        cout<<v.size()-mp[v[0]]<<endl;
    }
    return 0;
}