#include <bits/stdc++.h>
using namespace std;
int n,k,arr[59];
int main ()
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sort(arr,arr+n,greater<int>());
    if(k>n)
        printf("-1\n");
    else
        printf("%d 0\n",arr[k-1]);
    return 0;
}
