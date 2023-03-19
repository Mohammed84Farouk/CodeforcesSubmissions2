#include <bits/stdc++.h>
using namespace std;
int a[1007],n,b[1007];
bool r=true,c=false;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d%d",&a[i],&b[i]);
    for(int i=1;i<=n;i++)
    {
        if(a[i-1]!=b[i-1])
            c=true;
        if(a[i]>a[i-1])
            r=false;
    }
    if(!r&&!c)
        printf("unrated");
    else if(c)
        printf("rated");
    else
        printf("maybe");
    return 0;
}
