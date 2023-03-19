#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x;
int n,d;
pair<char,ll>p;
int main(int argc, char ** argv)
{
    scanf("%d%lld",&n,&x);
    for(int i=0;i<n;i++)
        {
            cin>>p.first>>p.second;
            //scanf("%c %lld",&p.first,&p.second);
            if(p.first=='+')
                x+=p.second;
            else if(x-p.second>=0)
                x-=p.second;
            else
                d++;
        }
    printf("%lld %d",x,d);
    return 0;
}
