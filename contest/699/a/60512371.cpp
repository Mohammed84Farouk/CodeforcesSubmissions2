#include <bits/stdc++.h>
using namespace std;
string s;
pair<char,int>p[200007];
int n,ans=INT_MAX;
bool flag=false;
int main(int argc, char ** argv)
{
    ios::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);
	cout.setf(ios::fixed);
	cin>>n>>s;
	for(int i=0;i<n;i++)
	{
	    cin>>p[i].second;
	    p[i].first=s[i];
	}
	for(int i=0;i<n;i++)
        if(p[i].first=='R'&&p[i+1].first=='L')
        {
            ans=min(ans,(p[i+1].second-p[i].second)/2);
            flag=true;
        }
    if(flag)
        cout<<ans;
    else cout<<-1;
    return 0;
}
