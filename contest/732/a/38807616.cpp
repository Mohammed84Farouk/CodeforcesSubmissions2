#include <bits/stdc++.h>
using namespace std;
int n,m;
int main(int argc, char ** argv)
{
    scanf("%d%d",&n,&m);
    for(int i=1;true;i++)
        if(n*i%10==m||n*i%10==0)
            {printf("%d",i);break;}
}
