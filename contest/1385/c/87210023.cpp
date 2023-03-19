#include <bits/stdc++.h>
using namespace std;
int t,n,arr[200005];
int main ()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        memset(arr,0,n);
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        bool flag=false;
        int c=1,cur=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(!flag)
            {
                if(arr[i]>=cur)
                {
                    c++;
                    cur=arr[i];
                }
                else {
                    flag=true;
                    c++;
                    cur=arr[i];
                }
            }
            else{
                if(arr[i]<=cur)
                {
                    c++;
                    cur=arr[i];
                }
                else
                    break;
            }
        }
        printf("%d\n",n-c);
    }
    return 0;
}