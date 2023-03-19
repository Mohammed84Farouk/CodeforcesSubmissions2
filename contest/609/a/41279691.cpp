#include <bits/stdc++.h>
using namespace std;
int n,m,ans,i,a;
vector<int>v;
int main(int args, char ** argv)
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        v.push_back(a);
    }
    sort(v.rbegin(),v.rend());
    while(ans<m)
    {
        ans+=v[i];
        i++;
    }
    printf("%d",i);
    return 0;
}
