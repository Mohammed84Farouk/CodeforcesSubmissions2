#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,A[107],m;
pair<int,int>p;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        cin>>p.first>>p.second;
        if(p.first!=n)
            A[p.first]+=A[p.first-1]-p.second;//right down
        if(p.first!=1)
            A[p.first-2]+=p.second-1;//left up
        A[p.first-1]=0;
    }
    for(int i=0;i<n;i++)
        cout<<A[i]<<endl;
    return 0;
}