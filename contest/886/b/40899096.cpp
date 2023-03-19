#include <bits/stdc++.h>
using namespace std;
int a[200007],n,ans;
bool f[200007];
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=n-1;i>=0;i--)
    {
        if(f[a[i]]==0)
            ans=a[i];
        f[a[i]]=1;
    }
    printf("%d",ans);
    return 0;
}