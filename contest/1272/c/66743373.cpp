#include <bits/stdc++.h>
using namespace std;
int n,k;
long long m,ans;
string s;
char c[27];
bool visited[200005];
int main()
{
    scanf("%d%d",&n,&k);
    cin>>s;
    for(int i=0;i<k;i++)
        scanf("%s",&c[i]);
    for(int i=0;i<n;i++)
        for(int j=0;j<k;j++)
            if(s[i]==c[j])
            {
                visited[i]=true;
                break;
            }
    for(int i=0;i<n;i++)
        if(visited[i]==0)
        {
            ans+=(m*(m+1))/2;
            m=0;
        }
        else m++;
    if(m!=0)
        ans+=(m*(m+1))/2;
    printf("%lld",ans);
    return 0;
}
