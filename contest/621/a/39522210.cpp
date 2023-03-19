#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
vector<ll>vodd,veven;
ll ans,a;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {
            scanf("%lld",&a);
            if(a%2==1)
                vodd.push_back(a);
            else veven.push_back(a);
        }
    for(int i=0;i<veven.size();i++)
        ans+=veven[i];
    if(vodd.size()%2==1)
    {
        sort(vodd.begin(),vodd.end());
        for(int i=vodd.size();i>1;i--)
            ans+=vodd[i-1];
    }
    else
        for(int i=0;i<vodd.size();i++)
            ans+=vodd[i];
    printf("%lld",ans);
    return 0;
}
