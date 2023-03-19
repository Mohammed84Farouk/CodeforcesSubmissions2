#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
typedef long long ll;
int n,t,a[100],ans;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        a[t]=1;
    }
    for(int i=1,b=0;i<=90;i++)
    {
        if(b==15)
            break;
        if(a[i]==1)
            b=0;
        else b++;
        ans=max(i,ans);
    }
    printf("%d",ans);
	return 0;
}
