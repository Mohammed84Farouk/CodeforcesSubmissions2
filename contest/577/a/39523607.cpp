#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a,ans;
int main(int argc, char ** argv)
{
    scanf("%d%d",&n,&a);
    for(int i=1;i<=n;i++)
        if(a%i==0&&a/i<=n)
            ans++;
    printf("%d",ans);
    return 0;
}
