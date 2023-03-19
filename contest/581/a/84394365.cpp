#include <bits/stdc++.h>
using namespace std;
int r,b;
int main()
{
    scanf("%d%d",&r,&b);
    int mn=min(r,b);
    printf("%d ",mn);
    r-=mn,b-=mn;
    printf("%d\n",max(r/2,b/2));
    return 0;
}
