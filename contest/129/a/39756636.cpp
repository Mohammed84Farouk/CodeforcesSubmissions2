#include <bits/stdc++.h>
using namespace std;
int n,sum,a[109],ans;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0;i<n;i++)
        if((sum-a[i])%2==0)
            ans++;
    cout<<ans<<"\n";
    return 0;
}
