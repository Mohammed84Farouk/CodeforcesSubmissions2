#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,c,d=1;
bool flag =false;
int main(int argc, char ** argv)
{
    cin>>a>>b>>c;
    while (d<=b)
    {
        if(d>=a)
            {cout<<d<<" ";flag=true;}
        if(d>b/c) break;
        d*=c;
    }
    if(!flag)
        cout<<-1<<endl;
    return 0;
}