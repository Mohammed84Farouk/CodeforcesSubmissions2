#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string  , int>msi;
map<int , int>mii;
set<int>si;
int n,f=1,l;
bool flag=true;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    l=n;
    for(int i=0;i<n;i++)
    {
        if(flag)
        {
            printf("%d ",f);
            f++;
            flag=false;
        }
        else
        {
            printf("%d ",l);
            l--;
            flag=true;
        }
    }
    return 0;
}
