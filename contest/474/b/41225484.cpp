#include <bits/stdc++.h>
using namespace std;
int n,prfxsm[100007],a[100007],b[100007],m;

int main(int args, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i!=0)
            prfxsm[i]=prfxsm[i-1]+a[i];
        else prfxsm[i]=a[i];
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
        printf("%d\n",lower_bound(prfxsm,prfxsm+n,b[i])-prfxsm+1);
    }
    return 0;
}
