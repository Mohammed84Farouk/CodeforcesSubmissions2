/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)2e6+7;
bool prime[N];
vector<int>primes;
void sieve(ll x)
{
    fill(prime,prime+N,1);
    prime[0]=prime[1]=false;
    for(ll i=2;i*i<N;i++)
        if(prime[i])
        {
            primes.push_back(i);
            for(ll j=i*i;j<N;j+=i)
                prime[j]=0;
        }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("bye.in","r",stdin);
    //freopen("output.txt","w",stdout);
    sieve(N);
    int t;cin>>t;
    while(t--)
    {
        ll x;cin>>x;
        ll y=sqrt(x);
        if(y*y==x&&prime[y]==true)
            cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}
