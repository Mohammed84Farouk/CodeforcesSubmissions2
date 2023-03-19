#include <bits/stdc++.h>
using namespace std;
int k[1001],n,mx=INT_MIN;
string s[1001];
map<string,int>mp,mp2;
int main(int args, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        scanf("%d",&k[i]);
        mp[s[i]]+=k[i];
    }
    for(int i=0;i<n;i++)
        mx=max(mp[s[i]],mx);
    for(int i=0;i<n;i++)
    {
        mp2[s[i]]+=k[i];
        if(mp2[s[i]]>=mx&&mp[s[i]]==mx)
        {cout<<s[i];break;}
    }
}
