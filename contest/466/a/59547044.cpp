#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
#define clr(x,val) memset(x,val,sizeof(a));//fill array with 0s. clr(array,0);
typedef long long ll;
int miny=INT_MAX,s1,s2,s3,n,m,a,b;

int main(int argc, char ** argv)
{
    scanf("%d%d%d%d",&n,&m,&a,&b);
    s1=n*a;
    s2+=(n/m)*b;
    s3=(n/m)*b+b;
    n%=m;
    s2+=n*a;
    printf("%d",min(s1,min(s3,s2)));
    return 0;
}
