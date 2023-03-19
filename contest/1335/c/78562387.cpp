#include <bits/stdc++.h>
using namespace std;
int t,n,a[200009];
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        int mx=0;
        set<int>s;
        map<int,int>mp;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            s.insert(a[i]);
            mp[a[i]]++;
            mx=max(mp[a[i]],mx);
        }
        if(n==1)
            printf("0\n");
        else
            printf("%d\n",max(min(mx-1,(int)s.size()),min(mx,(int)s.size()-1)));
    }
    return 0;
}
