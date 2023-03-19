#include <bits/stdc++.h>
using namespace std;
vector<char>v;
string s;
int main(int argc, char ** argv)
{
    cin>>s;
    for(int i=0;i<s.size();i++)
        if(s[i]!='+')
            v.push_back(s[i]);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        {
            printf("%c",v[i])/*cout<<v[i]*/;
            if(i!=v.size()-1)
                printf("+");
        }
    return 0;
}
