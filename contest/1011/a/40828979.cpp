#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
typedef long long ll;
int n,k,arr[30],ans;
char c;
int main(int argc, char ** argv)
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf(" %c",&c);
        arr[c-'a']++;
    }
    for(int i=0;i<26;i++)
        if(k&&arr[i]!=0)
        {
            ans+=i+1;
            i++;
            k--;
        }
    if(!k)
        printf("%d",ans);
    else printf("-1");
    return 0;
}
