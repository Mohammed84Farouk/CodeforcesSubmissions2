#include <bits/stdc++.h>
using namespace std;
map<int,int>freq;
int n,arr[100005],mx,maxarr[100005],freqi[100005];
int main ()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=n-1;i>=0;i--)
    {
        maxarr[i]=max(maxarr[i+1],arr[i]);
        freq[arr[i]]++;
        freqi[i]=freq[arr[i]];
    }
    for(int i=0;i<n;i++)
    {
        int ans=maxarr[i]-arr[i];
        ans+=(maxarr[i]==arr[i])? ((freqi[i]==1)? 0:1):1;
        printf("%d ",ans);
    }
    return 0;
}
