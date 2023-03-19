#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
typedef long long ll;
string s;
int n,diffx,diffX;
map<char,int>mp;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    cin>>s;
    for(int i=0;i<n;i++)
        mp[s[i]]++;
    if(mp['X']>mp['x'])
    {
        diffX=(mp['X']-mp['x'])/2;
        printf("%d\n",diffX);
        for(int i=0;i<n;i++)
            if(s[i]=='X'&&diffX)
            {
                printf("x");
                diffX--;
            }
            else printf("%c",s[i]);
    }
    else if(mp['X']==mp['x'])
    {
        printf("0\n");
        cout<<s;
    }
    else
    {
        diffX=(mp['x']-mp['X'])/2;
        printf("%d\n",diffX);
        for(int i=0;i<n;i++)
            if(s[i]=='x'&&diffX)
            {
                printf("X");
                diffX--;
            }
            else printf("%c",s[i]);
    }
    return 0;
}
