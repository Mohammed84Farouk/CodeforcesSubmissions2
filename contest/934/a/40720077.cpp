#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
typedef long long ll;
ll n,m,a[57],b[57];
vector<ll>ans;
int main(int argc, char ** argv)
{
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    for(int i=0;i<n;i++)
    {
        ll mx=-1e18-7;
        for(int j=0;j<m;j++)
            mx=max(mx,a[i]*b[j]);
        ans.push_back(mx);
    }
    sort(ans.rbegin(),ans.rend());
    cout<<ans[1];
	return 0;
}