#include <bits/stdc++.h>
using namespace std;
int a,b,c,t;
int main(int argc, char ** argv)
{
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        printf("%d\n",min(c/2,b)*3+min(a,(b-min(c/2,b))/2)*3);
    }
    return 0;
}
