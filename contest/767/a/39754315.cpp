#include <bits/stdc++.h>
using namespace std;
int n,N,a;
bool arr[100007];
int main()
{
    scanf("%d",&n);
    N=n;
    for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            arr[a]=1;
            while(arr[N]==1)
            {
                printf("%d ",N);
                N--;
            }
            printf("\n");
        }
    return 0;
}
