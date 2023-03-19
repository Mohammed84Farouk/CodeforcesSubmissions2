#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int nb,ns,nc,pb,ps,pc,B,C,S;
ll r, burger;
string s;
int main()
{
    cin>>s;
    scanf("%d%d%d%d%d%d%I64d",&nb,&ns,&nc,&pb,&ps,&pc,&r);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='B') B++;
        else if(s[i]=='S') S++;
        else C++;
    }
    ll s=1,e=1e13+100;
    while(s<=e)
    {
        burger=(s+e)/2;
        ll cost=max((ll)0,(burger*B-nb)*pb)+max((ll)0,(burger*C-nc)*pc)+max((ll)0,(burger*S-ns)*ps);
        if(cost==r)
        {
            printf("%lld",burger);
            return 0;
        }
        else if(cost>r)
            e=burger-1;
        else s=burger+1;
    }
    printf("%lld",s-1);
    //cout<<s<<" "<<burger<<endl;
    return 0;
}
