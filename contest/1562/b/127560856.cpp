/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)2e5+7;
bool sieve(int n);
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("bye.in","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;cin>>t;
    vector<int>isprime(109,0);
    isprime[0]=isprime[1]=1;
    for(int i=2;i<=100;i++)
        if(isprime[i]==0)   //0 for primes
            for(int j=i*2;j<=100;j+=i)
                isprime[j]=1;
    while(t--)
    {
        int n,ans=0,rAns;cin>>n;
        string s;cin>>s;
        bool flag=false;
        for(int j=0;j<n&&!flag;j++)
        {
            if(s[j]!='2'&&s[j]!='3'&&s[j]!='5'&&s[j]!='7')
            {
                cout<<1<<endl<<s[j]<<endl;
                flag=true;
            }
            for(int i=j+1;i<n;i++)
            {
                ans=(s[j]-'0')*10+s[i]-'0';
                if(isprime[ans]==1)
                    rAns=ans;
            }
        }
        if(!flag)
            cout<<2<<endl<<rAns<<endl;
    }
    return 0;
}