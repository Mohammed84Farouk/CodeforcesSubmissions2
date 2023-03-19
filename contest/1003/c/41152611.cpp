#include <bits/stdc++.h>
using namespace std;
double ans;
int n,k,d,prfxsm[5007];
int main(int args, char ** argv)
{
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&d);

        if(i==1)
            prfxsm[i]+=d;
        else
            prfxsm[i]=prfxsm[i-1]+d;
    }
    for(;k<=n;k++)
        for(int i=k;i<=n;i++)
            if(i==k)
                ans=max(1.0*prfxsm[i]/k,ans);
            else
                ans=max(1.0*(prfxsm[i]-prfxsm[i-k])/k,ans);
    cout<<fixed<<setprecision(6)<<ans<<endl;
    return 0;
}
