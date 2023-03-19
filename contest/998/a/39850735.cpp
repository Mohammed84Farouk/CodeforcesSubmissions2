#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int A=INT_MAX,n,a[1007],I,s;

int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(A>a[i])
        {
            A=a[i];
            I=i+1;
        }
        s+=a[i];
    }
    s-=A;
    if(n==1||A==s)
        return puts("-1");
    printf("1\n%d",I);
    return 0;
}
