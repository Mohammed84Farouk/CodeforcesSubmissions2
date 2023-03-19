#include <bits/stdc++.h>
using namespace std;
int n,ans;
string s;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
            ans++;
        else {
            ans++;
            break;
        }
    }
    printf("%d",ans);
    return 0;
}