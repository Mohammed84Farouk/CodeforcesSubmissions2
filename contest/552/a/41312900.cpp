#include <bits/stdc++.h>
using namespace std;
int n,x,y,x2,y2,ans;
int main(int args, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d%d",&x,&y,&x2,&y2);
        int w=abs(x-x2)+1;
        int l=abs(y-y2)+1;
        ans+=w*l;
    }
    printf("%d",ans);
    return 0;
}
