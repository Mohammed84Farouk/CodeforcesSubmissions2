//countryside
#include <bits/stdc++.h>
using namespace std;
int n,a[95],ans;
bool flag=true;
int main(int args, char ** argv)
{
    scanf("%d",&n);
    if(n==1)
        {
            scanf("%d",&a[0]);
            if(a[0]==15)
                printf("DOWN");
            else if(a[0]==0)
                printf("UP");
            else
                printf("-1");
            return 0;
        }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        if(i!=0)
            if(abs(a[i]-a[i-1])!=1)
                flag=false;
        if(i==n-1&&flag)
            if(a[i]==0)
            {
                flag=false;
                printf("UP");
            }
            else if(a[i]==15)
            {
                flag=false;
                printf("DOWN");
            }
        else if(i==n-1)
            ans=a[i]-a[i-1];
    }
    if(flag)
        if(ans>0)
            printf("UP");
        else printf("DOWN");
    return 0;
}
