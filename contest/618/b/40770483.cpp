#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
typedef long long ll;
int n,grid[57][57];
bool f[57];
vector<int>v;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&grid[i][j]);
    for(int i=0;i<n;i++)
    {
        int mx=0;
        for(int j=0;j<n;j++)
            mx=max(grid[j][i],mx);
        v.push_back(mx);
        f[mx]=true;
    }
    for(int i=0;i<n;i++)
        if(f[v[i]])
        {
            printf("%d ",v[i]);
            f[v[i]]=false;
        }
        else printf("%d ",v[i]+1);

	return 0;
}
