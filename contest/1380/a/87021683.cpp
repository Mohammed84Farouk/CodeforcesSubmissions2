#include <bits/stdc++.h>
using namespace std;
int t,n,arr[1004];
int main ()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        memset(arr,0,n);
        bool sml=false,bg=false,flag=false;
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        for(int i=1;i<n-1&&!flag;i++)
        {
            flag=false,sml=false,bg=false;
            deque<int>dq;
            dq.push_back(i+1);
            for(int j=i+1,k=i-1;j<n||k>=0;j++,k--)
            {
                if(arr[i]>arr[j]&&!bg&&j<n)
                {
                    bg=true;
                    dq.push_back(j+1);
                }
                if(arr[k]<arr[i]&&!sml&&k>=0)
                {
                    sml=true;
                    dq.push_front(k+1);
                }
                if(bg&&sml)
                {
                    flag=true;
                    printf("YES\n");
                    for(auto o:dq)
                        printf("%d ",o);
                    puts(" ");
                    break;
                }
            }
        }
        if(!flag)
            puts("NO");
    }
    return 0;
}
