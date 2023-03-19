#include<bits/stdc++.h>
using namespace std;
int x;
int main()
{
    scanf("%d",&x);
    for(int i=1;i<=100;i++)
        for(int j=i;j<=100;j++)
            if(i<=x&&j<=x&&j%i==0&&i*j>x&&j/i<x)
            {
                printf("%d %d",j,i);
                return 0;
            }
    printf("-1");
    return 0;
}
