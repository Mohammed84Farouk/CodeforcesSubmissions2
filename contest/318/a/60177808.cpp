#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,p;
int main(int argc, char ** argv)
{
    cin>>n>>p;
    if(n%2==0)
        if(p<=n/2)
            cout<<2*p-1;
        else cout<<(p-n/2)*2;
    else
        if(p<=n/2+1)
            cout<<2*p-1;
        else cout<<(p-n/2-1)*2;
    return 0;
}