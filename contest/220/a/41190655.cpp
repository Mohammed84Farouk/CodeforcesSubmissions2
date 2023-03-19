#include <bits/stdc++.h>
using namespace std;
int n,a[100007],b[100007],d;
int main(int args, char ** argv)
{
    scanf("%d",&n);
    for(int f=0;f<n;f++)
    {
        scanf("%d",&a[f]);
        b[f]=a[f];
    }
    sort(b,b+n);
    for(int i=0;i<n;i++)
        if(b[i]!=a[i])
            d++;
    if(d<=2)
        printf("YES");
    else
        printf("NO");
    return 0;
}
