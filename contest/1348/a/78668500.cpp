#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int t,n;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        ll f=0,a=0;
        for(ll i=1;i<=n;i++)
        {
            a+=pow(2,i);
            if(i==n||i<=n/2-1)
                f+=pow(2,i);

        }
        printf("%lld\n",2*f-a);
    }
    return 0;
}
