#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
typedef long long ll;
int c,m,sc,sm,n,ans;
bool C,M;
int main(int argc, char ** argv)
{
    for(int i=0;i<3;i++)
    {
        scanf("%d",&c);
        sc+=c;
    }
    for(int i=0;i<3;i++)
    {
        scanf("%d",&m);
        sm+=m;
    }
    if(sc%5!=0&&sc!=0)
        C=true;
    if(sm%10!=0&&sm!=0)
        M=true;
    if(M)ans++;
    if(C)ans++;
    scanf("%d",&n);
    if(ans+ceil(sc/5)+ceil(sm/10)>n)
        printf("NO\n");
    else printf("YES\n");
	return 0;
}
