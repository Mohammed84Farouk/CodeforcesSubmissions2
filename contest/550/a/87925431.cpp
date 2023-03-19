#include <bits/stdc++.h>
using namespace std;
string s;
int main ()
{
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A'&&s[i+1]=='B') {
            for(int j=i+2;j<s.size();j++)
                if(s[j]=='B'&&s[j+1]=='A')
                    {printf("YES");return 0;}}
        else if(s[i]=='B'&&s[i+1]=='A') {
            for(int j=i+2;j<s.size();j++)
                if(s[j]=='A'&&s[j+1]=='B')
                    {printf("YES");return 0;}}
    }
    printf("NO");
    return 0;
}
