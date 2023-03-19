#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int t;
string s;
int main(int argc, char ** argv)
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>s;
        string t1='a'+s;
        bool flag=false;
        for(int i=0;i<t1.size();i++)
            if(t1[i]!=t1[t1.size()-1-i])
                {flag=true;break;}
        if(flag)
        {
            cout<<"YES\n"<<t1<<'\n';
            continue;
        }
        string t2=s+'a';
        for(int i=0;i<t2.size();i++)
            if(t2[i]!=t2[t2.size()-1-i])
                {flag=true;break;}
        if(flag)
        {
            cout<<"YES\n"<<t2<<'\n';
            continue;
        }
        cout<<"NO"<<'\n';
    }
    return 0;
}