#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a,t[107],ans,l,r,z;
int main(int argc, char ** argv)
{
    scanf("%d%d",&n,&a);
    l=a-1;
    r=n-a;
    for(int i=0;i<n;i++)
        scanf("%d",&t[i]);
    if(t[a-1]==1)
        ans++;
    for(int i=1;i<=min(l,r);i++)
        if(t[a-i-1]==1&&t[a+i-1]==1)
            ans+=2;
    z=abs(r-l);
    if(l<r)
        for(int i=0;i<z;i++)
            if(t[a+min(l,r)+i]==1)
                ans++;
    if(l>r)
        for(int i=0;i<z;i++)
            if(t[i]==1)
                ans++;
    printf("%d",ans);
    return 0;
}
