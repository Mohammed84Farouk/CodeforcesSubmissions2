#include <bits/stdc++.h>
using namespace std;
int n,r,ans;
int main(int args, char ** argv)
{
    scanf("%d",&n);
    r=n-((int)sqrt(n)*(int)sqrt(n));
    ans+=(int)sqrt(n)*4;
    if(r<=(int)sqrt(n)&&r)
        ans+=2;
    else if(r>(int)sqrt(n))
        ans+=4;
    printf("%d",ans);
    return 0;
}
