#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int t,n,m,q,p;
int main(int argc, char ** argv)
{
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        ll e=0,o=0,e2=0,o2=0;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&q);
            if(q&1)
                o++;
            else e++;
        }
        scanf("%d",&m);
        while(m--)
        {
            scanf("%d",&p);
            if(p&1)
                o2++;
            else e2++;
        }
        printf("%lld\n",e*e2+o*o2);
    }
    return 0;
}
