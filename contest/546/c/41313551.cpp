#include <bits/stdc++.h>
using namespace std;
int n,x,k,game;
queue<int>q,q2;
int main(int args, char ** argv)
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<k;i++)
    {
        scanf("%d",&x);
        q.push(x);
    }
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        scanf("%d",&x);
        q2.push(x);
    }
    while(!q.empty()&&!q2.empty())
    {
        if(q.front()>q2.front())
        {
            q.push(min(q.front(),q2.front()));
            q.push(max(q.front(),q2.front()));
            q.pop();
            q2.pop();
        }
        else
        {
            q2.push(min(q.front(),q2.front()));
            q2.push(max(q.front(),q2.front()));
            q.pop();
            q2.pop();
        }
        game++;
        if(game>150)
        {
            printf("-1");
            return 0;
        }
    }
    if(!q.empty())
        printf("%d 1",game);
    else
        printf("%d 2",game);
    return 0;
}
