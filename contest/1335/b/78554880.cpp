#include <bits/stdc++.h>
using namespace std;
int t,n,a,b;
int main()
{
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int temp=0;
        scanf("%d%d%d",&n,&a,&b);
        for(int j=0;j<n;j++,temp++)
        {
            if(temp==b&&temp<=a)
                temp=0;
            printf("%c",'a'+temp);
        }
        printf("\n");
    }
    return 0;
}
