#include <bits/stdc++.h>
using namespace std;
int t,n;
int main(int argc, char ** argv)
{
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>t;
    if(n<2&&t==10)
        cout<<-1;
    else
    {
        if(t==10)
        cout<<1;
        else cout<<t;
        for(int q=0;q<n-1;q++)
            if(q==n-2&&t==10)
                cout<<0;
            else if(q==n-2)
                cout<<t;
            else cout<<0;
    }
	return 0;
}
