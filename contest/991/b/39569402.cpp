#include <bits/stdc++.h>
using namespace std;
int a[107],s,w,avmi,d,n;
double avmd;
bool f=true;
int main(int argc, char ** argv)
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    sort(a,a+n);
    while(f)
    {
        avmd=s/double(n);
        avmi=avmd;
        if(avmd>=4.5000)
        {
            printf("%d",w);
            return 0;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]!=5)
                {
                    d=5-a[i];
                    a[i]=5;
                    w++;
                    break;
                }
            }
            s+=d;
        }
    }
    return 0;
}
