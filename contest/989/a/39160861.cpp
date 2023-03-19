#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s,t;
int A,B,C;
int main(int argc, char ** argv)
{
    cin>>s;
    for(int i=0;i<s.size();i++)
        if(s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='C'||s[i]=='B'&&s[i+1]=='C'&&s[i+2]=='A'||s[i]=='C'&&s[i+1]=='B'&&s[i+2]=='A'||s[i]=='C'&&s[i+1]=='A'&&s[i+2]=='B'||s[i]=='A'&&s[i+1]=='C'&&s[i+2]=='B'||s[i]=='B'&&s[i+1]=='A'&&s[i+2]=='C')
            {
                printf("Yes\n");
                return 0;
            }
    printf("No\n");
    return 0;
}
