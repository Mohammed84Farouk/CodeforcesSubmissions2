#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
#define clr(x,val) memset(x,val,sizeof(a));//fill array with 0s. clr(array,0);
typedef long long ll;
int t,n,A,B,a,b,mxa,mxb;

int main(int argc, char ** argv)
{
    /*
    ios::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);
	cout.setf(ios::fixed);
	*/
    scanf("%d",&t);
    while(t--)
    {
        mxa=0,mxb=0;
        scanf("%d%d%d",&n,&a,&b);
        for(int i=0;i<a;i++)
        {
            scanf("%d",&A);
            mxa=max(A,mxa);
        }
        for(int i=0;i<b;i++)
        {
            scanf("%d",&B);
            mxb=max(B,mxb);
        }
        if(mxa>mxb)
            printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
