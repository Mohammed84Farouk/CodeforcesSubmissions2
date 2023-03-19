#include <bits/stdc++.h>
using namespace std;
map<string, string>mp;
int n,m;
string s,s2;
int main ()
{
    scanf("%d %d",&n,&m);
    while(m--)
    {
        cin>>s>>s2;
        mp[s]=s2;
    }
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(mp[s].size()>=s.size())
            cout<<s<<" ";
        else cout<<mp[s]<<" ";
    }
    return 0;
}
