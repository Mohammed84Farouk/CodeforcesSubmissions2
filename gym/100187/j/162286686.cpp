#include<bits/stdc++.h>

using namespace std;

const int N = 2e5 + 5;
int n, m, P[N], a[N], x;

int findparent(int node)
{
    if(P[node] == node) return node;
    return P[node] = findparent(P[node]);
}

void un(int x, int y)
{
    x = findparent(x); y = findparent(y);
    if(x == y) return;
    P[y] = x;
}

int findval(int x)
{
    for(int i = 1; i <= n;i++)
    {
        if(a[i] == x) return i;
    }
}

int main()
{
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        P[i] = i;
        cin>>a[i];
    }

    cin>>m;
    for(int i = 0; i < m ; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin>>x;
            un(j, x);
        }
    }

    int val, idx;
    cin>>val;
    idx = findval(val);
    if(findparent(1) == findparent(idx)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
