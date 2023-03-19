#include <bits/stdc++.h>
using namespace std;
int n;
double x;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&x);
        if(ceil(x/2)>1)
            printf("%lld\n",(long long)ceil(x/2)-1);
        else printf("0\n");
    }
    return 0;
}
