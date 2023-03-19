#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
int n;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    if(n>36)
        printf("-1");
    else
        for(int i=0;i<(n/2+(n%2));i++)
            if(n%2==0||i!=n/2)
               printf("8");
            else
                printf("4");
	return 0;
}
