#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,ans;
bool isPrim(int s)
{
    for(int i=2;i<s;i++)
        if(s%i==0)
            return true;
    return false;

}
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=4;i<n;i++)
    {
        ans=i;
        if(isPrim(i)&&isPrim(n-ans))
        {
            ans=i;
            printf("%d %d",i,n-ans);
            break;
        }
    }
    return 0;
}
