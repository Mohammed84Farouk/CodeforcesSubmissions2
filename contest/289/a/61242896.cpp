#include<bits/stdc++.h>
using namespace std;
int n,k,x,y,c;
int main(int argc, char ** argv)
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        c+=(y-x+1);
    }
    printf("%d",(c%k!=0)?k-c%k:0);
    return 0;
}
