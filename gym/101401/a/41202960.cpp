#include <bits/stdc++.h>
using namespace std;
int a,b,c;
string s;
int main(int args, char ** argv)
{
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",min(a/2+b,c));
    return 0;
}
