#include<bits/stdc++.h>
using namespace std;
int n,a[100005],b[100005],naughty;
bool vis[100005];
queue<int>q;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        q.push(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        if(q.front()!=b[i]&&vis[q.front()]==true)
            while(vis[q.front()])
                q.pop();
        if(q.front()==b[i]&&vis[b[i]]==false)
        {
            q.pop();
            continue;
        }
        else
        {
            naughty++;
            vis[b[i]]=true;
        }
    }
    printf("%d",naughty);
    return 0;
}
