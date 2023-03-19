#include<bits/stdc++.h>
using namespace std;
set <char>c;
string s;
int main(int argc, char ** argv)
{
    getline(cin,s);
    for(int i=0;i<s.size();i++)
            if(s[i]!=','&&s[i]!='{'&&s[i]!='}'&&s[i]!=' ')
                c.insert(s[i]);
    cout<<c.size();
    return 0;
}
