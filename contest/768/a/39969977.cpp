#include <bits/stdc++.h>
using namespace std;
int n,a[100007],mn=INT_MAX,mx;
map<int,int>m;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        m[a[i]]++;
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    if(m.size()==1)
        printf("0");
    else
        printf("%d",n-m[mx]-m[mn]);
    return 0;
}
