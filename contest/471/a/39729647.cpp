#include <bits/stdc++.h>
using namespace std;
set<int>s;
set<int>::iterator it;
int a[6],arr[10],maxy,miny=INT_MAX;
int main(int argc, char ** argv)
{
    for(int i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
        maxy=max(a[i],maxy);
        miny=min(a[i],miny);
        s.insert(a[i]);
        arr[a[i]]++;
    }
    if(s.size()==1)
        printf("Elephant");
    else if(s.size()==2)
    {
        if(arr[miny]%2==0)
            printf("Elephant");
        else if(arr[miny]%2==1&&arr[miny]!=3)
            printf("Bear");
        else
            printf("Alien");
    }
    else if(s.size()==3)
        {
            for(it=s.begin();it!=s.end();it++)
            {
                if(arr[*it]==4)
                {
                    printf("Bear");
                    return 0;
                }
            }
           printf("Alien");
        }
    else
        printf("Alien");
    return 0;
}
