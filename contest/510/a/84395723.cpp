#include <bits/stdc++.h>
using namespace std;
int n,m;
bool flag;
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
            for(int j=0;j<m;j++)
                printf("#");
        else
        {
            if(!flag)
            {
                for(int j=0;j<m;j++)
                {
                    if(j==m-1)
                        printf("#");
                    else printf(".");
                }
                flag=true;
            }
            else
            {
                for(int j=0;j<m;j++)
                {
                    if(j==0)
                        printf("#");
                    else printf(".");
                }
                flag=false;
            }
        }
        printf("\n");
    }
    return 0;
}
