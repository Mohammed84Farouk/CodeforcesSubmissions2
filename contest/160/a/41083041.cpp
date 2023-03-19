#include <bits/stdc++.h>
using namespace std;
int sum,n,a[107],other,k;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    sort(a,a+n);
    for(int i=n-1;i>=0;i--)
    {
        other+=a[i];
        sum-=a[i];
        k++;
        if(other>sum)
        {
            printf("%d",k);
            return 0;
        }
    }
    return 0;
}
