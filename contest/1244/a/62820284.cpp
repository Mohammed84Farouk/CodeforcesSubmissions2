#include <bits/stdc++.h>
using namespace std;
float a,b,c,d;
int t,k,n,n2;
int main(int argc, char ** argv)
{
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%f%f%f%f%d",&a,&b,&c,&d,&k);
        n=ceil(a/c);
        n2=ceil(b/d);
        if(n+n2>k)
            printf("-1\n");
        else printf("%d %d\n",n,n2);
    }
    return 0;
}
