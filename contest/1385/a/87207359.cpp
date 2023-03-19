#include <bits/stdc++.h>
using namespace std;
map<int,int>mp;
int t,x,y,z,mx,mn=INT_MAX;
int main ()
{
    scanf("%d",&t);
    while(t--)
    {
        mx=0,mn=INT_MAX;
        mp.clear();
        scanf("%d%d%d",&x,&y,&z);
        mx=max(x,max(y,z));
        mn=min(x,min(y,z));
        mp[x]++,mp[y]++,mp[z]++;
        if(mp[mx]>1)
            printf("YES\n%d %d %d\n",mn,mn,mx);
        else puts("NO");
    }
    return 0;
}