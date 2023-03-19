#include <bits/stdc++.h>
using namespace std;
int n,x,y,s;
int main(int args, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        if(x<0)
            s++;
    }
    if(s<=1||n-s<=1)
        printf("YES");
    else printf("NO");
    return 0;
}
