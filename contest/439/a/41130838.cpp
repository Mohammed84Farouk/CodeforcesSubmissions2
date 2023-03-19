#include <bits/stdc++.h>
using namespace std;
int n,d,t,T;
int main(int args, char ** argv)
{
    scanf("%d%d",&n,&d);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        T+=t;
    }
    if((n-1)*10+T>d) printf("-1");
    else printf("%d",(d-((n-1)*10+T))/5+(n-1)*2);
}
