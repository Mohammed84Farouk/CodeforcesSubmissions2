#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("alimagde.in","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int i = 1, val = 0;
        int n;
        cin>>n;
        while(val <= n)
        {
            val += i;
            i++;
        }
        i--;
        cout<<n - i + 1<<endl;
    }
    return 0;
}
