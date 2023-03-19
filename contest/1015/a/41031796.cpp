#include <bits/stdc++.h>
using namespace std;
int n,m,mn=INT_MAX,a,b;
map<int,int>mp;
int main(int argc, char ** argv)
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        for(int j=a;j<=b;j++)
            mp[j]++;
        mn=min(mn,a);
    }
    printf("%d\n",m-mp.size());
    if(m-mp.size()!=0)
        for(int i=1;i<=m;i++)
            if(mp[i]==0)
                printf("%d ",i);
    return 0;
}
