#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,A[1009];
string s;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);
    sort(A,A+n);
    if(n%2==1)
        cout<<A[n/2]<<endl;
    else cout<<A[n/2-1]<<endl;
    return 0;
}