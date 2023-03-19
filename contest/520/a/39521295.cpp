#include <bits/stdc++.h>
using namespace std;
string s;
int n;
map<char,int>m;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    cin>>s;
    for(int i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
            m[s[i]]++;
        }
    if(m.size()==26)
        printf("YES");
    else puts("NO");
    return 0;
}
