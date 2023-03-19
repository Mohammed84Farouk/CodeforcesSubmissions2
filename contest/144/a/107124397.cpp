#include<bits/stdc++.h>
using namespace std;
int n,arr[107],mx,mxi,mni,mn=INT_MAX;

int main()
{

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(mx<arr[i])
        {
            mx=arr[i];
            mxi=i+1;
        }
        if(mn>=arr[i])
        {
            mn=arr[i];
            mni=i+1;
        }
    }
    if(mxi-1+n-mni>=n)
        printf("%d",mxi+n-2-mni);
    else printf("%d",mxi+n-1-mni);
    return 0;
}
