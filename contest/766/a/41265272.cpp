#include <bits/stdc++.h>
using namespace std;
int ans;
string a,b;
int main(int args, char ** argv)
{
    cin>>a>>b;
    if(a==b)
        printf("-1");
    else printf("%d",max(a.size(),b.size()));
    return 0;
}
