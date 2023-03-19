#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,x[100009],q,m,ans,last;
void BinarySearch(int b,int e,int key)
{
    while(b<=e)
    {
        int mid=(b+e)/2;
        if(x[mid]<=key)
            b=mid+1;
        else if(x[mid]>key)
            e=mid-1;
        last=b;
    }
}
int main(int argc, char ** argv)
{

    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&x[i]);
    sort(x,x+n);
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
        scanf("%d",&m);
        last=0;
        BinarySearch(last,n-1,m);
        printf("%d\n",last);
    }
    return 0;
}
