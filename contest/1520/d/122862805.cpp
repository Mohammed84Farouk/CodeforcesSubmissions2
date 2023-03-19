/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)1e5+7;
void sieve(int n);
ll perm(ll n,ll r);
ll comb(ll n,ll r);
int n;
map<ll,ll>mp;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        cin>>n;
        ll ans=0,arr[200009];
        mp.clear();
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]-i]++;
        }
        bool vis[900009]={false};
        for(int i=0;i<n;i++)
        {
            if(!vis[200009+arr[i]-i])
                ans+=comb(mp[arr[i]-i],2);
            vis[200009+arr[i]-i]=true;
        }
        cout<<ans<<endl;
    }
    return 0;
}
ll perm(ll n,ll r)
{
    ll ans=1;
    for(int i=0;i<r;i++)
        ans*=(n-i);
    return ans;
}
ll comb(ll n,ll r)
{
    ll ans=perm(n,r);
    for(int i=r;i>0;i--)
        ans/=i;
    return ans;
}
