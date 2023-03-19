#include <bits/stdc++.h>
using namespace std;
int S,u;
map<string,string>server;
vector<pair<string,string>>unkown;
int main(int args, char ** argv)
{
    scanf("%d%d",&S,&u);
    for(int i=0;i<S;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        server[s2]=s1;
    }
    for(int i=0;i<u;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        string t={};
        for(int j=0;j<s2.size()-1;j++)
            t+=s2[j];
        unkown.push_back(make_pair(s1,t));
        cout<<s1<<" "<<s2<<" #"<<server[t]<<'\n';
    }
    return 0;
}
