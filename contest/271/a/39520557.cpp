#include <bits/stdc++.h>
using namespace std;
int n,U,T,H,TH;

int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=n+1;true;i++)
    {
        U=i%10;
        T=((i-U)%100)/10;
        H=((i-U-(T*10))%1000)/100;
        TH=((i-U-(H*100)-(T*10))%10000)/1000;
        if(U!=T&&U!=H&&U!=TH&&T!=H&&T!=TH&&H!=TH)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
