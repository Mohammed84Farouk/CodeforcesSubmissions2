#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a[100005];
ll s,s2;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=0;i<n;i++)
        if(i+1<=n/2)
            s+=a[i];
        else s2+=a[i];
    printf("%lld",s*s+s2*s2);
    return 0;
}
