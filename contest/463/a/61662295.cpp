#include <bits/stdc++.h>
using namespace std;
bool flag=false;
int n,s,x,y,arr[107],k;
int main(int argc, char ** argv)
{
    scanf("%d%d",&n,&s);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        if(x<s||x==s&&y==0)
        {
            arr[k]=y;
            k++;
        }
    }
    sort(arr,arr+k);
    if(k==0){
        printf("-1");
        flag=true;}
    else if(k==1&&arr[0]==0){
        printf("0");
        flag=true;}
    else if(k==1&&arr[0]!=0){
        printf("%d",100-arr[0]);
        flag=true;}
    else if(k>1)
        for(int i=0;i<k;i++)
        {
            if(arr[i]!=0)
            {
                flag=true;
                printf("%d",100-arr[i]);
                return 0;
            }
        }
    if(!flag)
        printf("0");
}
