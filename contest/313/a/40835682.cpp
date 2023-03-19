#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
typedef long long ll;
ll n;
int mx;
string s;
int main(int argc, char ** argv)
{
    scanf("%lld",&n);
    if(n>0)
        printf("%lld",n);
    else
    {
        n*=-1;
        stringstream ss;
        ss<<n;
        ss>>s;
        if(s.size()!=2&&s[0]!='0'&&s[1]=='0'||s.size()==2&&s[0]!='0'&&s[1]!='0'||s.size()!=2)
            printf("-");
        for(int i=1;i<=2;i++)
            mx=max(s[s.size()-i]-'0',mx);
        if(s[s.size()-1]-'0'==mx)
            for(int i=0;i<s.size()-1;i++)
                printf("%c",s[i]);
        else
            for(int i=0;i<s.size();i++)
                if(i!=s.size()-2)
                    printf("%c",s[i]);
                else {i++;printf("%c",s[i]);}
    }
    return 0;
}
