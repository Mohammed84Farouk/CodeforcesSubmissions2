#include <bits/stdc++.h>
using namespace std;
int t,x,n,m;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        bool flag=false;
        scanf("%d%d%d",&x,&n,&m);
        m*=10;
        if(x-m<=0)
            flag=true;
        while(n&&!flag)
        {
            x=x/2+10;
            n--;
            if(x-m<=0)
                {flag=true;break;}
        }
        if(flag)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
