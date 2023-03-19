#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string  , int>msi;
map<int , int>mii;
set<int>si;
string s;
int A,B,C,aa,bb,cc;//counters
bool a=false,b=false,c=false,Sa7=true,haa=true,tkrr=true;//if there
int main(int argc, char ** argv)
{
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[0]=='a')
            a=true;
        if(s[s.size()-1]=='c')
            c=true;
        if(s[i]=='a')
            A++;
        if(s[i]=='b')
            {
                b=true;
                B++;
            }
        if(s[i]=='c')
            C++;
    }
    for(int i=A+1;i<A+B;i++)
        if(s[i-1]=='a'&&s[i]=='b'&&s[i+1]=='c')
            Sa7=false;
    for(int i=A;i<A+B;i++)
        if(s[i]!='b')
            tkrr=false;
    if(a&&b&&c&&C==A&&Sa7&&haa&&tkrr||a&&b&&c&&C==B&&haa&&Sa7&&tkrr)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}