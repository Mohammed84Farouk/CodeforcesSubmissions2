#include <bits/stdc++.h>
using namespace std;
int t,n;
int main ()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int arr[105]={},rep[105]={};
        for(int i=0;i<2*n;i++)
        {
            scanf("%d",&arr[i]);
            rep[arr[i]]++;
            if(rep[arr[i]]==1)
                printf("%d ",arr[i]);
        }
        printf("\n");
    }
    return 0;
}