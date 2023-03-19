#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,x[100009],q,m,ans;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&x[i]);
    sort(x,x+n);
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
        scanf("%d",&m);
        printf("%d\n",upper_bound(x,x+n,m)-x);
    }
    return 0;
}
