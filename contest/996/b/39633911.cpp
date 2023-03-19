#include <bits/stdc++.h>
using namespace std;
int n,ans,miny=100000000000,q[100007],m;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {
            scanf("%d",&q[i]);
            miny=min(miny,q[i]);
        }
    ans=miny;
    for(int i=miny%n;true;i++,ans++)
    {
        if(q[i]-ans<=0)
            {
                printf("%d",i+1);
                break;
            }
        if(i==n-1)
            i=-1;
    }
    return 0;
}
