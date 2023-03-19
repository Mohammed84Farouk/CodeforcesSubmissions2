#include <bits/stdc++.h>
using namespace std;
int x[17],y[17],n,m;

int main(int argc, char ** argv)
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%d",&x[i]);
    for(int i=0;i<m;i++)
        scanf("%d",&y[i]);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(x[i]==y[j])
                printf("%d ",x[i]);
    printf("\n");
    return 0;
}