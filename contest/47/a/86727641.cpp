#include <bits/stdc++.h>
using namespace std;
float n;
int main ()
{
    scanf("%f",&n);
    float ans=(float)(-1.0+sqrt(1.0+8.0*n))/2.0;
    n=(int)(-1.0+sqrt(1.0+8.0*n))/2.0;
    if(n-ans==0)
        printf("YES\n");
    else printf("NO\n");
    return 0;
}
