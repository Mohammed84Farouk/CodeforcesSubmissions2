#include <bits/stdc++.h>
using namespace std;
int n,r;
string s;
map<char,int>mp;
bool _2ked;
int main(int args, char ** argv)
{
    scanf("%d",&n);
    cin>>s;
    if(n==1&&s[0]=='?')
    {
        printf("YES");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
        if(s[i]==s[i+1]&&s[i]!='?')
        {
            printf("No");
            return 0;
        }
        if(s[i]=='?'&&s[i+1]!='?'&&s[i-1]!='?'&&s[i+1]!=s[i-1]&&i+1!=n&&i!=0)
            r++;
    }
    if(_2ked)
        printf("YES");
    else if(mp['?']==r)
        printf("NO");
    else
        printf("YES");
    return 0;
}
