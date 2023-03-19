#include <bits/stdc++.h>
using namespace std;
int a,b;
int main(int argc, char ** argv)
{
    scanf("%d%d",&a,&b);
    if(a==9&&b==1)
        printf("9 10");
    else if(a==b)
        printf("%d %d",a*10+1,b*10+2);
    else if(b==1+a)
        printf("%d %d",b*10-1,b*10);
    else printf("-1");
    return 0;
}
