#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,s,e,mid,k,a[100005];
ll S,cost;
int main()
{
    scanf("%d%I64d",&n,&S);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    e=n;
    while(s<=e)
    {
        mid=(s+e)/2;
        vector<ll>v;
        for(int i=0;i<n;i++)
            v.push_back(a[i]+(ll)(i+1)*mid);
        sort(v.begin(),v.end());
        ll c=0;
        for(int i=0;i<mid;i++)
            c+=v[i];
        if(c<=S)
        {
            s=mid+1;
            k=mid;
            cost=c;
        }
        else e=mid-1;
    }
    printf("%d %I64d",k,cost);
    return 0;
}
