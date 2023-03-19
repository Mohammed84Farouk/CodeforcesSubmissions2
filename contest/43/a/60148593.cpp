#include <bits/stdc++.h>
using namespace std;
map<string,int>mp;
int n,mx;
string s;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    while(n--)
    {
        cin>>s;
        mp[s]++;
        mx=max(mx,mp[s]);
    }
    for(map<string,int>::iterator it=mp.begin();it!=mp.end();it++)
        if(it->second==mx)
        {
            cout<<it->first;
            return 0;
        }
}