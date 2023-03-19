#include <bits/stdc++.h>
using namespace std;
int n,a[107],ans;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=0;i<n;)
    {
        ans+=a[i+1]-a[i];
        i+=2;
    }
    printf("%d",ans);
    return 0;
}
