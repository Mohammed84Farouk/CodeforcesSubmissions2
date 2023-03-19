#include <bits/stdc++.h>
using namespace std;
int n,arr[100005],c,ind;
int main ()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<arr[i-1]&&i)
        {
            ind=i;
            c++;
        }
    }
    arr[n]=arr[0];
    if(arr[n]<arr[n-1]){
        ind=0;
        c++;
    }
    if(c>1) puts("-1");
    else if(ind==0) puts("0");
    else printf("%d",n-ind);
    return 0;
}
