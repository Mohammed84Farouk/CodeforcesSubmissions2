#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1e9+7;
string s;
ll a[100007],n,k,sum;
int main(int argc, char ** argv)
{
   scanf("%lld%lld",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);
    for(int i=0;i<n;i++)
        if(a[i]<=0&&k)
        {
            a[i]*=-1;
            k--;
        }
    sort(a,a+n);
    if(k&&k%2!=0)
        a[0]*=-1;
    for(int i=0;i<n;i++)
        sum+=a[i];
    printf("%lld",sum);
	return 0;
}