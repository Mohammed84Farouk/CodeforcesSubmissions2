#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans;
int heavy,metal;
string s;

int main(int argc, char ** argv)
{
    cin>>s;
    for(int i=s.size()-1;i>0;i--)
        if(s[i]=='y'&&s[i-1]=='v'&&s[i-2]=='a'&&s[i-3]=='e'&&s[i-4]=='h')
        {
            heavy++;
            ans+=metal;
        }
        else if(s[i]=='l'&&s[i-1]=='a'&&s[i-2]=='t'&&s[i-3]=='e'&&s[i-4]=='m')
            metal++;
    cout<<ans;
    return 0;
}