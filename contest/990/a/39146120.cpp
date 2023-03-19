#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a,b;

int main(int argc, char ** argv)
{
    scanf("%lld%lld%lld%lld",&n,&m,&a,&b);
    if(n%m==0) printf("0\n");
    else
        printf("%lld",min((n%m)*b,abs(m-(n%m))*a));
    return 0;
}
