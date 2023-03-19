#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
typedef long long ll;
int n,m,B,mnx=107,mny=107,mxx,mxy;
char a[107][107];
int main(int argc, char ** argv)
{
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='*')
            {
                mnx=min(mnx,i);
                mny=min(mny,j);
                mxx=max(mxx,i);
                mxy=max(mxy,j);
            }
        }
    for(int i=mnx;i<=mxx;i++)
    {
        for(int j=mny;j<=mxy;j++)
            cout<<a[i][j];
        cout<<'\n';
    }
	return 0;
}
