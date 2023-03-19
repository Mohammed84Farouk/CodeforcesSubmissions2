#include <bits/stdc++.h>
using namespace std;
int c,n;
string s;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    cin>>s;
    for(int i=0;i<s.size();i++,c++)
        if(s[i]=='R'&&s[i+1]=='U'||s[i]=='U'&&s[i+1]=='R')
            i++;
    printf("%d",c);
    return 0;
}
