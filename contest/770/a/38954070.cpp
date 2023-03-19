#include <bits/stdc++.h>
using namespace std;
vector<char>v={'a','b'};
int n,k,c=2,d;
int main(int argc, char ** argv)
{
    scanf("%d%d",&n,&k);
    d=n-k;
    for(int i=2;i<=n;i++)
    {
        if(d==0)
        {
            v.push_back(97+c);
            c++;
        }
        else
        {
            v.push_back(v[i-2]);
            d--;
        }
    }
    for(int i=0;i<n;i++)
        cout<<v[i];
    return 0;
}
