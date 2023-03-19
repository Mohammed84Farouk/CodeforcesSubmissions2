#include <bits/stdc++.h>
using namespace std;
int n,t,a[100005],sum,m,ans,mx;
int main(int args, char ** argv)
{
    scanf("%d%d",&n,&t);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
        ans++;
        while(sum>t)
        {
            sum-=a[m];
            m++;
            ans--;
        }
        mx=max(mx,ans);
    }
    printf("%d",mx);
    return 0;
}
