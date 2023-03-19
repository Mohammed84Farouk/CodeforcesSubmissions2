#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)1e5+7;
void sieve(int n);
int arr[N],a[N];
vector<ll> check(int n,int k,int S)
{
    vector<ll>a;
    for(int i=0;i<n;i++)
        a.push_back(arr[i]+(ll)k*(i+1));
    return a;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;ll S;cin>>n>>S;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int s=0,e=n,mid,ans=0;
    ll T=0;
    while(s<=e)
    {
        ll t=0;
        mid=(s+e)/2;
        vector<ll>test=check(n,mid,S);
        sort(test.begin(),test.end());
        for(int i=0;i<mid;i++)
            t+=test[i];
        if(S<t)
            e=mid-1;
        else{
            ans=mid;
            T=t;
            s=mid+1;
        }
    }
    cout<<ans<<" "<<T;
    return 0;
}