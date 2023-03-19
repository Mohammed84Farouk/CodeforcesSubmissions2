#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string  , int>msi;
map<int , int>mii;
set<int>si;
ll A,B,x,y,z,Ans;
int main(int argc, char ** argv)
{
    cin>>A>>B>>x>>y>>z;
    if(A-(2*x+y)<0)
        Ans+=abs(A-(2*x+y));
    if(B-(y+3*z)<0)
        Ans+=abs(B-(y+3*z));
    cout<<Ans<<endl;
    return 0;
}
