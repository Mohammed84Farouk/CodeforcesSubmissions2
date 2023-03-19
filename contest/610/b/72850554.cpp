#include<bits/stdc++.h>
using namespace std;
long long n,arr[200007],Fpos,Lpos,mx,mn=INT_MAX,diff;
int main()
{
    scanf("%lld",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
        if(arr[i]<mn)
            Fpos=i;
        mn=min(mn,arr[i]);
        if(arr[i]==mn)
            Lpos=i;
    }
    long long _1st=n-(Lpos-Fpos)-1,_2nd=0;
    for(int i=Fpos+1;i<=Lpos;i++)
    {
        if(arr[i]!=mn)
            diff++;
        else diff=0;
        _2nd=max(_2nd,diff);
    }
    printf("%lld",mn*n+max(_2nd,_1st));
    return 0;
}