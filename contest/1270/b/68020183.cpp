#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
#define clr(x,val) memset(x,val,sizeof(A));//fill array with 0s. clr(array,0);
typedef long long ll;
int t,n,A[200005];
 
int main(int argc, char ** argv)
{
    scanf("%d",&t);
    while(t--)
    {
        int imx=0,imn=0;
        bool flag=false;
        clr(A,0);
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
            if(i&&abs(A[i-1]-A[i])>1)
            {
                flag=true;
                imx=i+1;
                imn=i;
            }
        }
        if(flag)
            printf("YES\n%d %d\n",imn,imx);
        else printf("NO\n");
    }
    return 0;
}