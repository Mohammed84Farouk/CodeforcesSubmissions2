#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,h,a,ans;

int main(int argc, char ** argv)
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    scanf("%d %d",&n,&h);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a>h)
            ans+=2;
        else ans++;
    }
    printf("%d\n",ans);
    return 0;
}