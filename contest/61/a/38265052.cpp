#include<bits/stdc++.h>
using namespace std;
string s,t;
vector <int> v;
int main(int argc, char ** argv)
{
    cin>>s>>t;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==t[i])
            v.push_back(0);
        else
            v.push_back(1);
    }
    for(int i=0;i<s.size();i++)
        cout<<v[i];
    cout<<endl;
    return 0;
}
