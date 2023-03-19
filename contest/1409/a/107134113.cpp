#include<bits/stdc++.h>
using namespace std;
int t,a,b;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        double e=abs(((double)a-(double)b)/10);
        printf("%d\n",((abs(a-b))/10)+((e-(int)e==0)? 0:1));
    }
    return 0;
}
