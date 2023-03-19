#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a,ans;
int main(int args, char ** argv)
{
    scanf("%d%d%d",&n,&m,&a);
    ans=(n/a+(n%a>0))*(m/a+(m%a>0));
    printf("%lld",ans);
    return 0;
}
