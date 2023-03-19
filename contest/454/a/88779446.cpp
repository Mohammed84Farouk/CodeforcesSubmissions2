#include <bits/stdc++.h>
using namespace std;
int n,c;
int main ()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(i>n/2) c--;
        for(int j=0;j<n;j++)
        {
            if(i==n/2)
                printf("D");
            else if(i<n/2)
            {
                if(j>=n/2-c&&j<=n/2+c)
                    printf("D");
                else printf("*");
            }
            else {
                if(j>=n/2-c&&j<=n/2+c)
                    printf("D");
                else printf("*");
            }
        }
        printf("\n");
        if(i<n/2) c++;
    }
    return 0;
}
