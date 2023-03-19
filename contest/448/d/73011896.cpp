#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
ll k;
ll BS(ll n, ll m, ll k)
{
    ll s=1;
    ll e=n*m,mid;
    while(s<e)
    {
        ll c=0,mid=(s+e)/2;
        for(ll i=1;i<=n;i++)
            c+=min((mid)/i,(ll)m);
        if(c>=k) e=mid;
        else s=mid+1;
    }
    return s;
}
int main()
{
    scanf("%d%d%I64d",&n,&m,&k);
    printf("%I64d",BS(n,m,k));
    return 0;
}
