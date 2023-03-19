#include <bits/stdc++.h>
using namespace std;
int t;
string s[9];
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        int a[12][12];
        for(int i=0;i<9;i++)
            cin>>s[i];
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
                if(s[i][j]=='5')
                    s[i][j]='4';
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
                printf("%c",s[i][j]);
            printf("\n");
        }
    }
    return 0;
}
