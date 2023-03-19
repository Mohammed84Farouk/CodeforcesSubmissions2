#include <bits/stdc++.h>
using namespace std;
string s,t,ans;
int c;
int main(int argc, char ** argv)
{
    cin>>s>>t;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=t[i])
        {
            if(c%2==0)
                ans+=s[i];
            else ans+=t[i];
            c++;
        }
        else
            ans+=s[i];
    }
    if(c%2==0)
        cout<<ans;
    else
        printf("impossible");
    return 0;
}
