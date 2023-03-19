#include <bits/stdc++.h>
using namespace std;
queue<int>q;
int n,m,M,a,ans;
int main(int args, char ** argv)
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        q.push(a);
    }
    while(!q.empty())
    {
        if(M-q.front()<0)
        {
            M=m;
            ans++;
        }
        M-=q.front();
        q.pop();
    }
    printf("%d",ans);
    return 0;
}
