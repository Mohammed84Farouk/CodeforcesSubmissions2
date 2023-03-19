#include <bits/stdc++.h>
using namespace std;
int n,arr[100005],m,b[100005];
map<int,int>mp;
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
        scanf("%d",&b[i]);
        v+=mp[b[i]];
        p+=n-mp[b[i]]+1;
    }
    printf("%I64d %I64d",v,p);
    return 0;
}
