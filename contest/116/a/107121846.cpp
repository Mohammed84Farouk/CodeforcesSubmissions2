#include<bits/stdc++.h>
using namespace std;
int n,a,b,c,ans;
int main()
{

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        c-=a;
        c+=b;
        ans=max(ans,c);
    }
    printf("%d",ans);
    return 0;
}
