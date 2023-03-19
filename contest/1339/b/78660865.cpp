#include <bits/stdc++.h>
using namespace std;
int t,n,a[100004];
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        memset(a,100004,0);
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        int initial=n/2-1;
        if(n%2==0)
            for(int i=0;initial+i<n;i++)
                if(i&&i+initial!=n-1) printf("%d %d ",a[initial+i],a[initial-i]);
                else if (i==0) printf("%d ",a[initial]);
                else printf("%d",a[initial+i]);
        else
            for(int i=0;i+initial+1<n;i++)
                if(i) printf("%d %d ",a[initial+1+i],a[initial+1-i]);
                else printf("%d ",a[initial+1]);
        printf("\n");
    }
    return 0;
}
