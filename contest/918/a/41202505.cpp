#include <bits/stdc++.h>
using namespace std;
int n,f[20];
string s;
int main(int args, char ** argv)
{
    scanf("%d",&n);
    f[0]=1;
    f[1]=1;
    for(int i=1,k=1;i<=n;i++)
    {
        if(f[k]==i)
        {   s+='O';
            k++;
            f[k]=f[k-1]+f[k-2];
        }
        else
            s+='o';
    }
    cout<<s;
    return 0;
}
