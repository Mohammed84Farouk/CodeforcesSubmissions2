#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans,total;
int n,m,a,b,arr[25],arr2[15],check[25];
string s;
int main(int argc, char ** argv)
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d%d",&a,&b);
        if(check[b]==0)
        {
            arr[i]=b;
            arr2[b]=a;
        }
        else
            arr2[b]+=a;
        check[b]=1;
    }

    sort(arr,arr+m);
    for(int i=m-1;i>=0;i--)
        {
        if(n-arr2[arr[i]]>=0)
        {
            ans+=arr[i]*arr2[arr[i]];
            n-=arr2[arr[i]];
        }
        else if(n>0)
        {
            ans+=arr[i]*n;
            break;
        }
    }
    printf("%lld",ans);
    return 0;
}
