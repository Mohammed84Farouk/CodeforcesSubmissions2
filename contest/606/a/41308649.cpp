#include <bits/stdc++.h>
using namespace std;
int a,b,c,x,y,z,s[3],needed,r;
int main(int args, char ** argv)
{
    scanf("%d%d%d%d%d%d",&a,&b,&c,&x,&y,&z);
    s[0]=a-x;s[1]=b-y;s[2]=c-z;
    //cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<endl;
    sort(s,s+3);
    for(int i=0;i<3;i++)
        if(s[i]<0)
            needed+=abs(s[i]);
        else r+=s[i]/2;
    if(r-needed>=0)
        printf("YES");
    else printf("NO");
    return 0;
}
