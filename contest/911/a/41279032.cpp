#include <bits/stdc++.h>
using namespace std;
int n,ans=INT_MAX,large;
pair<int,int>p[100005];
int main(int args, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i].first);
        p[i].second=i;
        large=max(p[i].first,large);
    }
    sort(p,p+n);
    for(int i=0;i<n;i++)
        if(p[i].first==p[i+1].first&&p[i].first<=large)
        {
            large=p[i].first;
            int j;
            for(j=i;p[j].first==p[i].first&&p[j+1].first==p[i].first;j++)
                ans=min(abs(p[j].second-p[j+1].second),ans);
            i=j;
        }
    printf("%d",ans);
    return 0;
}
