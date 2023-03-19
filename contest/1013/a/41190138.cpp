#include <bits/stdc++.h>
using namespace std;
int n,a,sum,sum2;
string s,t;
int main(int args, char ** argv)
{
    scanf("%d",&n);
    for(int f=0;f<n;f++)
    {
        scanf("%d",&a);
        sum+=a;
    }
    for(int f=0;f<n;f++)
    {
        scanf("%d",&a);
        sum2+=a;
    }
    if(sum>=sum2)
        printf("YES");
    else printf("NO");
    return 0;
}
