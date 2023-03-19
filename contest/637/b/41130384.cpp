#include <bits/stdc++.h>
using namespace std;
int n;
string s[200007];
set<string>ss;
int main(int args, char ** argv)
{
    scanf("%d",&n);
    for(int q=0;q<n;q++)
    {
        cin>>s[q];
        ss.insert(s[q]);
    }
    for(int i=n-1;i>=0;i--)
        if(ss.find(s[i])!=ss.end())
        {
            cout<<s[i]<<'\n';
            ss.erase(s[i]);
        }

}
