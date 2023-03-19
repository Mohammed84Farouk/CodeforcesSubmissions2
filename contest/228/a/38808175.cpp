#include <bits/stdc++.h>
using namespace std;
int n,maxy;
map<int,int>m;
int main(int argc, char ** argv)
{
    for(int i=0;i<4;i++)
       {
           scanf("%d",&n);
           m[n]++;
           maxy=max(m[n],maxy);
           
       }
    if(m.size()==2&&maxy>1)
        printf("2\n");
    else
        printf("%d\n",maxy-1);
}
