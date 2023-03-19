#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k;
ll m,a,b,sum;
vector<int>v;
int main(int argc, char ** argv)
{
    scanf("%d%lld",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%lld%lld",&a,&b);
        sum+=a;
        v.push_back(a-b);
    }
    if(sum<=m)
        printf("%d",k);
    else
    {
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size();i++)
        {
            sum-=v[i];
            k++;
            if(sum<=m)
            {
                printf("%d",k);
                return 0;
            }
        }
    }
    if(sum>m)
        printf("-1");
    return 0;
}
