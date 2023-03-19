#include<bits/stdc++.h>
using namespace std;
int ans,t;
int main(int argc, char ** argv)
{
    scanf("%d",&t);
    while(t>0)
    {
        if(t%2==1)
            ans++;
        t/=2;
    }
    printf("%d",ans);
    return 0;
}
