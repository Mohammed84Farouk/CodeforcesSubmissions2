#include <bits/stdc++.h>
using namespace std;
int a[1007],s;
bool flag=false;
int main(int argc, char ** argv)
{
    for(int i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    if(s%2==1)
        {printf("NO");return 0;}
    for(int i=0;i<6;i++)
        for(int j=i+1;j<6;j++)
            for(int k=j+1;k<6;k++)
                if(s-(a[i]+a[j]+a[k])==s/2)
                {printf("YES");return 0;}
    printf("NO");
    return 0;
}
