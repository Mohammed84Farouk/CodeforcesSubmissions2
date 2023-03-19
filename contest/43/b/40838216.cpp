#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
typedef long long ll;
string s,ss;
map<char,int>h,t;
int main(int argc, char ** argv)
{
    getline(cin,s);
    getline(cin,ss);
    for(int i=0;i<s.size();i++)
        h[s[i]]++;
    for(int i=0;i<ss.size();i++)
        t[ss[i]]++;
    for(int i=0;i<ss.size();i++)
        if(h[ss[i]]<t[ss[i]]&&ss[i]!=' ')
        {
            printf("NO");
            return 0;
        }
    puts("YES");
    return 0;
}
