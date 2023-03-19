#include <bits/stdc++.h>
using namespace std;
int n,m,a[100007],l,prefixSize[100007],tmp;
bool lw[100007];
int main(int argc, char ** argv)
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=n-1;i>=0;i--)
    {
        if(lw[a[i]]==0)
        {
            tmp++;
            lw[a[i]]=1;
        }
        prefixSize[i]=tmp;

    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&l);
        printf("%d\n",prefixSize[l-1]);
    }
    return 0;
}
