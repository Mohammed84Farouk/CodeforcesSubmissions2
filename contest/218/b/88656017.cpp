#include <bits/stdc++.h>
using namespace std;
int n,m,arr[1005],mn[1005],mx[1005];
bool preceed(int x,int y)
{
    return x>y;
}
int main ()
{
    //freopen("Input.pl","r",stdin);
    //freopen("Output.pl","w",stdout);
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
        mn[i]=arr[i];
        mx[i]=arr[i];
    }
    sort(mn,mn+m);
    int MN=0,MX=0,N=n,M=m;
    for(;N!=0;N--)
    {
        sort(mn,mn+M);
        MN+=mn[0];
        mn[0]--;
        if(mn[0]==0)
        {
            sort(mn,mn+M,preceed);
            M--;
        }
    }
    for(;n!=0;n--)
    {
        sort(mx,mx+m,preceed);
        MX+=mx[0];
        mx[0]--;
    }
    printf("%d %d",MX,MN);
    return 0;
}