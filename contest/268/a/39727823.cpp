#include <bits/stdc++.h>
using namespace std;
int n,ans,arr[107],a[107],h[107];

int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {
            scanf("%d%d",&h[i],&a[i]);
            arr[a[i]]++;
        }
    for(int i=0;i<n;i++)
        ans+=arr[h[i]];
    printf("%d",ans);
    return 0;
}