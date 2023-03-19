#include <bits/stdc++.h>
using namespace std;
int c,v0,v1,a,l,ans;
int main(int argc, char ** argv)
{
    scanf("%d%d%d%d%d",&c,&v0,&v1,&a,&l);
    for(int i=0;c>0;i++)
    {
        if(i==0)c-=v0;
        else if(v0+i*a>v1){
            c+=l;
            c-=v1;
        }
        else{
            c+=l;
            c-=(v0+i*a);
        }
        if(c<=0)ans=i+1;
    }
    printf("%d",ans);
    return 0;
}
