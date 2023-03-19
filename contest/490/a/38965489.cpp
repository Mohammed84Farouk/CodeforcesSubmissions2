#include<bits/stdc++.h>
using namespace std;
int n,o[5007],t[5007],h[5007],a,_1,_2,_3;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==1)
        {
            o[_1]=i;
            _1++;
        }
        else if(a==2)
        {
            t[_2]=i;
            _2++;
        }
        else if(a==3)
        {
            h[_3]=i;
            _3++;
        }
    }
    int miny=min(_3,min(_2,_1));
    printf("%d\n",miny);
    for(int i=0;i<miny;i++)
        printf("%d %d %d\n",o[i]+1,t[i]+1,h[i]+1);
    return 0;
}