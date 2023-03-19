#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1e9+7;
string s;
int ans;
vector<int>v;
int main(int argc, char ** argv)
{
    cin>>s;
    for(int i=0;i<s.size();i++)
        if(s[i]=='b'&&s[i+1]=='e'&&s[i+2]=='a'&&s[i+3]=='r'&&i+3<=s.size())
            v.push_back(i);

    for(int i=0,k=0;i<v.size();k++)
    {
        if(k<=v[i])
            ans+=s.size()-(v[i]+3);
        if(k==v[i])
            i++;
    }
    cout<<ans<<endl;
	return 0;
}
