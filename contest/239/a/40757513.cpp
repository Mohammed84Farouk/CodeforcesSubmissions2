#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
typedef long long ll;
int y,k,n,a;
string s;
bool flag;
int main(int argc, char ** argv)
{
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cin>>y>>k>>n;
    a=k-y;
    for(int i=1;a+y<=n;i++)
    {
        if(k*i<=n&&k*i-y>0)
        {
            cout<<k*i-y<<" ";
            flag=true;
        }
        //cout<<k*i<<" "<<k*i-y<<"<"<<abs(k*i-y)+y<<endl;
        a=k*i-y;
    }
    if(!flag)
        cout<<-1;
	return 0;
}
