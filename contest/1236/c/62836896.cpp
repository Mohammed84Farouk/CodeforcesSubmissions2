#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
#define clr(x,val) memset(x,val,sizeof(a));//fill array with 0s. clr(array,0);
typedef long long ll;
int n,p=1,a[305][305];
bool flag=true;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(flag)
        {
            for(int j=0;j<n;j++,p++)
                a[j][i]=p;
            flag=false;
        }
        else{
            for(int j=n-1;j>=0;j--,p++)
                a[j][i]=p;
            flag=true;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
