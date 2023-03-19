#include <bits/stdc++.h>
using namespace std;
int n,N,a;
bool arr[100007];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin>>n;
    N=n;
    for(int i=0;i<n;i++)
        {
            cin>>a;
            arr[a]=1;
            while(arr[N]==1)
            {
                cout<<N<<" ";
                N--;
            }
            cout<<"\n";
        }
    return 0;
}
