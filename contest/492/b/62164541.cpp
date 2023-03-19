#include <bits/stdc++.h>
using namespace std;
int n,arr[100004],l,maxgap;
double ans;
int main(int argc, char ** argv)
{
    scanf("%d%d",&n,&l);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
        maxgap=max(maxgap, arr[i+1]-arr[i]);
    double othermax=max(arr[0],l-arr[n-1]);
    cout<<fixed<<setprecision(10)<<max(othermax,maxgap/2.00);
    return 0;
}
