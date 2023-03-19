#include <bits/stdc++.h>
using namespace std;
int a,b,q,n,s;
int main(int argc, char ** argv)
{
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
        scanf("%d%d%d%d",&a,&b,&n,&s);
        min(s/n,a)*n+b>=s? puts("YES"): puts("NO");
    }
    return 0;
}
