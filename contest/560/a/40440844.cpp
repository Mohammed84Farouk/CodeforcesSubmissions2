#include <bits/stdc++.h>
using namespace std;
int n,a;
int main(int argc, char ** argv)
{
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	cin>>n;
	for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
        {
            cout<<-1;
            return 0;
        }
    }
    cout<<1;
	return 0;
}
