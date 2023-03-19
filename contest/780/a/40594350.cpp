#include <bits/stdc++.h>
using namespace std;
set<int>s;
int t,a,ans;
int main(int argc, char ** argv)
{
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    for(int q=0;q<t*2;q++)
	{
	    cin>>a;
	    if(s.count(a))
            s.erase(a);
        else
            s.insert(a);
        int sz=s.size();
        ans=max(sz,ans);
	}
	cout<<ans<<'\n';
	return 0;
}
