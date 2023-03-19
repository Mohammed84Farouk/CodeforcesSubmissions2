#include <bits/stdc++.h>
using namespace std;
vector<char>v;
string s;
int main(int argc, char ** argv)
{
    cin>>s;
    for(int i=0;i<s.size();i++)
        if(s[i]=='1')
            v.push_back(s[i]);
    for(int i=0;i<s.size();i++)
        if(s[i]=='2')
            v.push_back(s[i]);
    for(int i=0;i<s.size();i++)
        if(s[i]=='3')
            v.push_back(s[i]);
    for(int i=0;i<v.size();i++)
        {
            if(i!=v.size()-1)
                cout<<v[i]<<"+";
            else
                cout<<v[i];
        }
    return 0;
}
