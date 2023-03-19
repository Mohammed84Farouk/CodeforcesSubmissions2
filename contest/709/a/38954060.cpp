#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll w;
int n,b,d,a,r;
int main(int argc, char ** argv)
{
    scanf("%d%d%d",&n,&b,&d);
    for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a<=b)
                w+=a;
            if(w>d)
                {
                    r++;
                    w=0;
                }
        }
        printf("%d",r);
    return 0;
}
