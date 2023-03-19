#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,A[1000007];
int main(int argc, char ** argv)
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>A[i];
    for(int i=0;i<n;i++)
        {
            if(i==0)
                cout<<abs(A[i]-A[i+1])<<" "<<abs(A[i]-A[n-1])<<endl;
            else if(i==n-1)
                cout<<abs(A[i]-A[n-2])<<" "<<abs(A[i]-A[0])<<endl;
            else
                cout<<min(abs(A[i]-A[i-1]),abs(A[i]-A[i+1]))<<" "<<max(abs(A[i]-A[0]),abs(A[i]-A[n-1]))<<endl;
        }
    return 0;
}
