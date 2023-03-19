#include<bits/stdc++.h>
using namespace std;
string s,t,g;
char a[500];
int main()
{
    cin>>s>>t;
    for(int i=0;i<26;i++)
        a[s[i]]=t[i];
    cin>>g;
    for(int i=0;i<g.size();i++)
        if(g[i]>='A'&&g[i]<='Z')
        {
            g[i]=tolower(g[i]);
            char c=toupper(a[g[i]]);
            cout<<c;
        }
        else if(g[i]>='a'&&g[i]<='z')
            cout<<a[g[i]];
        else cout<<g[i];
    return 0;
}
