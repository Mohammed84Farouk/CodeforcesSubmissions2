#include <bits/stdc++.h>
using namespace std;
int n,h[100004],x,ans,E;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&h[i]);
        E+=x-h[i];
        if(E<0)
        {
            ans+=abs(E);
            E=0;
        }
        x=h[i];
    }
    printf("%d",ans);
    return 0;
}
