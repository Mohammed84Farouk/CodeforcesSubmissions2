#include<bits/stdc++.h>
using namespace std;
int q,a,b,c,n;
int main()
{
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d%d%d%d",&a,&b,&c,&n);
        int mx=max(a,max(c,b));
        int diffa=mx-a,diffc=mx-c,diffb=mx-b;
        int diff=diffa+diffc+diffb;
        n-=diff;
        if(n%3==0&&n>0||n==0)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}