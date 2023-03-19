#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
typedef long long ll;
int y,k,n,a;
bool flag;
int main(int argc, char ** argv)
{
    scanf("%d%d%d",&y,&k,&n);
    a=k-y;
    for(int i=1;a+y<=n;i++)
    {
        if(k*i<=n&&k*i-y>0)
        {
            printf("%d ",k*i-y);
            flag=true;
        }
        //cout<<k*i<<" "<<k*i-y<<"<"<<abs(k*i-y)+y<<endl;
        a=k*i-y;
    }
    if(!flag)
        printf("-1");
	return 0;
}
