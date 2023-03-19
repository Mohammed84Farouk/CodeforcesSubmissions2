#include<bits/stdc++.h>
using namespace std;
int t,n,arr[1007];
bool flag;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        memset(arr,0,n);
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        sort(arr,arr+n);
        flag=false;
        for(int i=1;i<n;i++)
            if(arr[i]-arr[i-1]>1)
                flag=true;
        if(!flag)
            puts("YES");
        else puts("NO");
    }
    return 0;
}
