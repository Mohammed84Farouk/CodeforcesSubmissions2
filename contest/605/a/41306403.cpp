#include <bits/stdc++.h>
using namespace std;
int n,a,ans,ps[100004];
int main(int args, char ** argv)
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        ps[a]=ps[a-1]+1;
        if(ps[a]>ans)
            ans=ps[a];
    }
    printf("%d",n-ans);
    return 0;
}
