#include <bits/stdc++.h>
using namespace std;
int n;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {
            if(i%2)
                printf("I hate ");
            else
                printf("I love ");
            if(i==n)
                printf("it");
            else printf("that ");
        }
    return 0;
}
