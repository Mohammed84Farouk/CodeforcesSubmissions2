#include <bits/stdc++.h>
using namespace std;
int n,a,b,c,ans;
int main(int args, char ** argv)
{
    scanf("%d%d%d%d",&n,&a,&b,&c);
    for(int x=0;x*a<=n;x++)
        for(int y=0;y*b<=n;y++)
        {
            int z=(n-x*a-y*b)/c;
            if(z>=0&&z*c+x*a+y*b==n)
                ans=max(ans,x+z+y);
        }
    printf("%d",ans);
    return 0;
}
