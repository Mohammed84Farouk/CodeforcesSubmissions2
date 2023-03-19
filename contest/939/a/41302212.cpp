#include <bits/stdc++.h>
using namespace std;
int n;
pair<int,int>a[100007];
int main(int args, char ** argv)
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i].first);
        a[i].second=i;
    }
    for(int i=1;i<=n;i++)
    {
        int _1st=a[i].first,i_1st=i,_2nd=a[a[i].first].first,i_2nd=a[_1st].second,_3rd=a[a[a[i].first].first].first,i_3rd=a[_2nd].second;
        if(_1st==i_2nd&&_2nd==i_3rd&&_3rd==i_1st)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
