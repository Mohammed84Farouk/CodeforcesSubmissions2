#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,f;
ll ans,l[100005],k[100005];
int main ()
{
    scanf("%d%d",&n,&f);
    vector<pair<ll,ll>>prfx(n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld%lld",&k[i],&l[i]);
        prfx[i]=make_pair(min(2*k[i],l[i])-min(k[i],l[i]),i);
    }
    sort(prfx.rbegin(),prfx.rend());
    for(int i=0;i<n;i++)
    {
        int pos=prfx[i].second;
        if(i<f)
            ans+=min(2*k[pos],l[pos]);
        else ans+=min(k[pos],l[pos]);
    }
    printf("%lld",ans);
    return 0;
}