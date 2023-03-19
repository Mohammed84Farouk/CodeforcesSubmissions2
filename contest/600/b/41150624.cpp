#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,ans,a[200007],b[200007];
int BS(int first,int last,int key)
{
    while(last>=first)
    {
        int mid=(first+last)/2;
        if(a[mid]>key)
            last=mid-1;
        else if(a[mid]<=key)
            first=mid+1;
        ans=first;
    }
    return ans;
}
int main(int args, char ** argv)
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
        printf("%d ",BS(0,n-1,b[i]));
    }
    return 0;
}
