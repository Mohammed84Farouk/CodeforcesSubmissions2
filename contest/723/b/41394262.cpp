#include <bits/stdc++.h>
using namespace std;
int n,w,l,sz;
string s;
bool braces;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            braces=true;
            for(int j=i+1;s[j]!=')';j++)
            {
                if(s[j]!='_'&&s[j+1]=='_'||s[j]!='_'&&s[j+1]==')')
                    w++;
                i=j;
                if(s[j]==')')
                    braces=false;
            }
        }
        else if(s[i]==')')
            braces=false;
        if(s[i]!='('&&s[i]!='_'&&s[i]!=')'&&!braces)
        {
            sz=0;
            for(int j=i;s[j]!='('&&s[j]!='_'&&s[j]!=')'&&j<n;j++)
            {
                sz++;
                i=j;
            }
            l=max(l,sz);
        }
    }
    printf("%d %d",l,w);
    return 0;
}
