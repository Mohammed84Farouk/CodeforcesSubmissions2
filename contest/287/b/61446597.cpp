#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,k,s;
ll SUM(ll m)
{
    return (m*(m+1))/2;
}
ll sum(ll s, ll n)
{
    if(s<=1)
        return SUM(n);
    else return SUM(n)-SUM(s-1);
}
ll BS(ll k, ll n)
{
    ll st=1,en=k;
    while(st<en)
    {
        ll mid=(st+en)/2;
        if(sum(mid,k)==n)
            return k-mid+1;
        else if(sum(mid,k)>n)
            st=mid+1;
        else en=mid;
    }
    return k-st+2;
}
int main(int argc, char ** argv)
{
    cin>>n>>k;

    if(n==1) printf("0");
    else if(n==k) printf("1");
    else
    {
        k--;
        n--;
        if(SUM(k)<n)
            printf("-1");
        else printf("%d",BS(k,n));
    }
    return 0;
}
