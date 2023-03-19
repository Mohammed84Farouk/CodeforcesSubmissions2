#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
typedef long long ll;
int k;
map<char,int>mp;
vector<pair<int,char>>v;
string s;
int main(int argc, char ** argv)
{
    scanf("%d",&k);
    cin>>s;
    for(int i=0;i<s.size();i++)
        mp[s[i]]++;

    for(char i='a';i<='z';i++)
        if(mp[i]%k!=0)
        {
            printf("-1");
            return 0;
        }
        else
            v.push_back(make_pair(mp[i]/k,i));
    if(k==1)
        cout<<s;
    else
    {
        sort(v.rbegin(),v.rend());
        for(int i=0;i<k;i++)
            for(int j=0;j<mp.size();j++)
                for(int q=0;q<v[j].first;q++)
                    cout<<v[j].second;
    }
    return 0;
}
