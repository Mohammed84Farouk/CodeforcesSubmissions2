#include <bits/stdc++.h>
using namespace std;
int n,arr[100005],l,ans;
int main ()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        l=1;
        for(int j=i;j<n;j++)
            if(arr[j+1]>arr[j])
                l++;
            else {
                i=j;
                break;
            }
        ans=max(ans,l);
    }
    printf("%d",ans);
    return 0;
}
