#include <bits/stdc++.h>
using namespace std;
int n,arr[100005],m,b,mp[1000005];
long long v,p;
int main ()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        mp[arr[i]]=i+1;
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b);
        v+=mp[b];
        p+=n-mp[b]+1;
    }
    printf("%I64d %I64d",v,p);
    return 0;
}
