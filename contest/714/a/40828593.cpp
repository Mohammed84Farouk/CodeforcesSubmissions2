#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
typedef long long ll;
ll l,r,l2,r2,k;
int main(int argc, char ** argv)
{
    scanf("%lld%lld%lld%lld%lld",&l,&r,&l2,&r2,&k);
    ll ans=min(r2,r)-max(l,l2)+1;
    if(k<=min(r,r2)&&k>=max(l,l2)&&ans>0)
        ans--;
    if(ans>0)
        printf("%lld",ans);
    else 
        printf("0");
    return 0;
}
