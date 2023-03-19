#include <bits/stdc++.h>
using namespace std;
int n,m,z;
int gcd(int a,int b)
{
    if(b!=0)return gcd(b,a%b);
    else return a;
}
int main(int args, char ** argv)
{
    scanf("%d%d%d",&n,&m,&z);
    printf("%d",z/(n*m/gcd(n,m)));
    return 0;
}
