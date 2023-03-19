#include <bits/stdc++.h>
using namespace std;
int n,arr[1007],ans;
bool _1=false,more,normal;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        more=false,normal=false;
        if(arr[i]==1)
        {
            if(!_1)
            {
                _1=true;
                ans++;
            }
            for(int j=i+1;j<n;j++)
                if(arr[j]==1&&j==i+1)
                {
                    normal=true;
                    break;
                }
                else if(arr[j]==1&&j!=i+1)
                {
                    more=true;
                    break;
                }
        }
        if(more) ans+=2;
        else if(normal) ans++;
    }
    printf("%d",ans);
    return 0;
}