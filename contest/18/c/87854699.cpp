#include <bits/stdc++.h>
using namespace std;
int n,arr[100004],prfx[100004],ans,Tsum;
int main ()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        prfx[i]=arr[i];
        prfx[i]+=prfx[i-1];
    }
    Tsum=prfx[n-1];
    for(int i=0;i<n-1;i++)
        if(prfx[i]==Tsum-prfx[i])
            ans++;
    printf("%d",ans);
    return 0;
}
