#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,t;
int main(int argc, char ** argv)
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--)
    {
        string s;cin>>n>>s;
        int o=0;
        if(s[0]=='0'||s[n-1]=='0')
            {cout<<"NO\n"<<'\n';continue;}
        for(int i=0;i<n;i++)
            if(s[i]=='1')
                o++;
        if(o%2==1||(n-o)%2==1)
            {cout<<"NO\n"<<'\n';continue;}
        string a="",b="";
        bool flip=false;
        for(int i=0,k=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                a+=(2*k<o)? '(':')';
                b+=(2*k<o)? '(':')';
                k++;
            }
            else{
                a+=(!flip)? ')':'(';
                b+=(flip)? ')':'(';
                flip=!flip;
            }
        }
        cout<<"YES\n"<<a<<'\n'<<b<<'\n';
    }
    return 0;
}
