#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[5],mx,sum;

int main(int argc, char ** argv)
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
        if(mx<a[i]) mx=a[i];
        sum+=a[i];
    }
    (mx<sum-mx)? puts("0"):printf("%d\n",abs(sum-2*mx)+(sum-2*mx<mx));
    return 0;
}
