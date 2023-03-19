#include <bits/stdc++.h>
using namespace std;
map<char,int>mp;
int n,ans,M[6]={4,6,8,12,20};
string s;
char m[6]={'T','C','O','D','I'};
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        mp[s[0]]++;
    }
    for(int i=0;i<5;i++)
        ans+=(((int)mp[m[i]])*M[i]);
    cout<<ans<<"\n";
    return 0;
}
