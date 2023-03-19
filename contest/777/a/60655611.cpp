#include <bits/stdc++.h>
using namespace std;
int n,x,p1[3]={1,0,0},p2[3]={0,1,0},p3[3]={0,0,1};
int main(int argc, char ** argv)
{
    scanf("%d%d",&n,&x);
    n%=6;
	for(int i=0;i<n;i++)
    {

        if((i+1)%2==1)
        {
            swap(p1[0],p1[1]);
            swap(p2[0],p2[1]);
            swap(p3[0],p3[1]);
        }
        else
        {
            swap(p1[2],p1[1]);
            swap(p2[2],p2[1]);
            swap(p3[2],p3[1]);
        }
    }
    if(p1[x]==1)
        printf("%d",0);
    else if(p2[x]==1)
        printf("%d",1);
    else if(p3[x]==1)
        printf("%d",2);
    return 0;
}
