#include<bits/stdc++.h>

using namespace std;

struct node
{
    double x, y;
};

double sqrdis(node a, node b)
{
    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

int main()
{
    node a[3];
    node b[3];

    for(int i = 0; i < 3; i++) cin>>a[i].x>>a[i].y;
    for(int i = 0; i < 3; i++) cin>>b[i].x>>b[i].y;

    double disa[3];
    double disb[3];

    int edge = 0;

    for(int i = 0; i < 3; i++)
        for(int j = i + 1; j < 3; j++)
            disa[edge++] = sqrdis(a[i], a[j]);

    edge = 0;

    for(int i = 0; i < 3; i++)
        for(int j = i + 1; j < 3; j++)
            disb[edge++] = sqrdis(b[i], b[j]);

    sort(disa, disa + 3);
    sort(disb, disb + 3);

    bool ans = false;

    if(disa[0] / disb[0] == disa[1] / disb[1] && disa[0] / disb[0] == disa[2] / disb[2]) ans = true;

    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
