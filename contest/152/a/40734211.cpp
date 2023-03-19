#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1e9+7;
char a[107][107];
int b[107][107],n,m;
set<int>s;
int main(int argc, char ** argv)
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            b[i][j]=a[i][j]-'0';
        }
    for(int j=0;j<m;j++)
    {
        int mx=0;
        for(int i=0;i<n;i++)
            mx=max(mx,b[i][j]);
        for(int i=0;i<n;i++)
            if(b[i][j]==mx)
                s.insert(i+1);
    }
    cout<<s.size();
	return 0;
}
