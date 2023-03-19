#include <bits/stdc++.h>
using namespace std;
string s;
int n,k,ans=INT_MAX;
map<char,int>mp;
int main()
{
    scanf("%d%d",&n,&k);
    cin>>s;
    for(int i=0;i<s.size();i++)
        mp[s[i]]++;
    for(int i=0;i<k;i++)
        ans=min(mp['A'+i],ans);
    printf("%d",ans*k);
    return 0;
}
