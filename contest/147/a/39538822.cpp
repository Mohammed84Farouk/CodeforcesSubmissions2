#include <bits/stdc++.h>
using namespace std;
string s;
vector<char>v;
int main(int argc, char ** argv)
{
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        int n=1;
        if(s[i]==' '||s[i]=='.'||s[i]=='?'||s[i]==','||s[i]=='!')
            {
                for(int j=i;s[j]==' '||s[j]=='.'||s[j]=='?'||s[j]==','||s[j]=='!';j++)
                    {
                        if(s[j]=='.'||s[j]=='?'||s[j]==','||s[j]=='!')
                            v.push_back(s[j]);
                        i=j;
                    }
            }
        if(s[i]=='.'||s[i]=='?'||s[i]==','||s[i]=='!')
            v.push_back(' ');
        else
            v.push_back(s[i]);
    }
        for(int i=0;i<v.size();i++)
        cout<<v[i];
    return 0;
}