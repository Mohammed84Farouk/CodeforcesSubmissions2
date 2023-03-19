#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string  , int>msi;
map<int , int>mii;
set<int>si;
vector<char>v;
int n,ones;
string s;
int main(int argc, char ** argv)
{
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
            ones++;
        if(ones==0||ones==1||s[i]=='0')
            v.push_back(s[i]);
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i];
    cout<<endl;
    return 0;
}
