#include <bits/stdc++.h>
using namespace std;
int a[200007],n,ans,s;
double d;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        ans+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        s+=a[i];
        if(s>=ceil(ans/2.0))
        {
            printf("%d",i+1);
            return 0;
        }
    }
    return 0;
}
