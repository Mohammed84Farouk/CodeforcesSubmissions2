#include <bits/stdc++.h>
using namespace std;
int n,a[107],ans,k;

int main(int argc, char ** argv)
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        if(a[i]<=k)
            ans++;
        else break;

    if(ans!=n)
        for(int i=n;i>0;i--)
            if(a[i-1]<=k)
                ans++;
            else break;
    printf("%d",ans);
    return 0;
}
