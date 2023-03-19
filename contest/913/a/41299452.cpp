#include <bits/stdc++.h>
using namespace std;
int n,m;
long long a;
int main(int args, char ** argv)
{
    scanf("%d%d",&n,&m);
    a=pow(2,n);
    printf("%d",m%a);
    return 0;
}
