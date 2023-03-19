#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
int n,k,q,arr[200007];
int main(int argc, char ** argv)
{
    scanf("%d%d%d",&n,&k,&q);
    for(int i=0;i<n;i++)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        arr[l]++;
        arr[r+1]--;
    }
    for(int i=0;i<200001;i++)
        arr[i+1]+=arr[i];
    for(int i=0;i<200001;i++)
        if(arr[i+1]>=k)
            arr[i+1]=1;
        else
            arr[i+1]=0;
    for(int i=0;i<200001;i++)
        arr[i+1]+=arr[i];
    for(int i=0;i<q;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d\n",arr[b]-arr[a-1]);
    }
	return 0;
}
