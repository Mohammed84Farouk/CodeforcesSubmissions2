#include<bits/stdc++.h>
using namespace std;
int n,k,ans;
long long arr[150004];
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
        if(i!=0)
            arr[i]+=arr[i-1];
    }
    int nw=arr[k-1];
    ans=1;
    for(int i=k;i<n;i++)
    {
        if(nw>arr[i]-arr[i-k])
        {
            nw=arr[i]-arr[i-k];
            ans=i-k+2;
        }
    }
    printf("%d",ans);
    return 0;
}