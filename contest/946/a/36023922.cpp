#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string  , int>msi;
map<int , int>mii;
set<int>si;
int n,a,B,C;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a>=0)B+=a;
        else C+=a;
    }

    printf("%d",B-C);
    return 0;
}