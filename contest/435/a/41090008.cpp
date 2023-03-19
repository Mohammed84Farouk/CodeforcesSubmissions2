#include <bits/stdc++.h>
using namespace std;
int n,m,M,a,ans=1;
int main(int args, char ** argv)
{
    scanf("%d%d",&n,&m);
    M=m;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(M-a>=0)
            M-=a;
        else
        {
            M=m;
            M-=a;
            ans++;
        }
    }
    printf("%d",ans);
    return 0;
}
