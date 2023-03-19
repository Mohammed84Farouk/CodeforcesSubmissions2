#include <bits/stdc++.h>
using namespace std;
int n,a,b,c,s;
int main(int argc, char ** argv)
{
    scanf("%d%d%d%d",&a,&b,&c,&n);
    if(c>a||c>b)
    {
        printf("-1");
        return 0;
    }
    a=abs(a-c);
    b=abs(b-c);
   s=(a+b+c);
    if(s>=n)
        printf("-1");
    else printf("%d",abs(n-s));
    return 0;
}
