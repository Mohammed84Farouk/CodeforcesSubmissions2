/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)1e5+7;
void sieve(int n);
int n;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        cin>>n;
        string s;cin>>s;
        bool vis[30]={false},flag=false;
        for(int i=0;i<s.size();i++)
        {
            if(vis[s[i]-'A']==true&&s[i]!=s[i-1])
                flag=true;
            vis[s[i]-'A']=true;
        }
        (!flag)?cout<<"YES":cout<<"NO";
        cout<<endl;
    }
    return 0;
}