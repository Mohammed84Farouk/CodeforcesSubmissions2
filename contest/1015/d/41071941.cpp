#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int recent=1,last;
ll s,n,k;
int main(int argc, char ** argv)
{
    scanf("%lld%lld%lld",&n,&k,&s);
    if(k>s||k*(n-1)<s)
    {
        printf("NO");
        return 0;
    }
    printf("YES\n");
    while(k)
    {
        last=min(n-1,s-k+1);
        if(recent-last>0)
            recent=recent-last;
        else recent=recent+last;
        printf("%d ",recent);
        s-=last;
        k--;
    }
    return 0;
}
