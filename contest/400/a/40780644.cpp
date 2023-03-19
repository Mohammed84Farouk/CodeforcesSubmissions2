#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
typedef long long ll;
int t;
string s;
char c[15];
bool checkTF()
{
    char grid[15][15];
    for(int i=0,k=0;i<3;i++)
        for(int j=0;j<4;j++)
        {
            grid[i][j]=s[k];
            k++;
        }
    int ans=0;
    for(int i=0;i<4;i++)
    {
        ans=0;
        for(int j=1;j<3;j++)
            if(grid[j][i]==grid[j-1][i]&&grid[j][i]=='X')
                ans++;
        if(ans==2)
            return true;
    }
    return false;
}
bool checkFT()
{
    char grid[15][15];
    for(int i=0,k=0;i<4;i++)
        for(int j=0;j<3;j++)
        {
            grid[i][j]=s[k];
            k++;
        }
    int ans=0;
    for(int i=0;i<3;i++)
    {
        ans=0;
        for(int j=1;j<4;j++)
            if(grid[j][i]==grid[j-1][i]&&grid[j][i]=='X')
                ans++;
        if(ans==3)
            return true;
    }
    return false;
}
bool checkTS()
{
    char grid[15][15];
    for(int i=0,k=0;i<2;i++)
        for(int j=0;j<6;j++)
        {
            grid[i][j]=s[k];
            k++;
        }
    int ans=0;
    for(int i=0;i<6;i++)
    {
        ans=0;
        for(int j=1;j<2;j++)
            if(grid[j][i]==grid[j-1][i]&&grid[j][i]=='X')
                ans++;
        if(ans==1)
            return true;
    }
    return false;
}
bool checkST()
{
    char grid[15][15];
    for(int i=0,k=0;i<6;i++)
        for(int j=0;j<2;j++)
        {
            grid[i][j]=s[k];
            k++;
        }
    int ans=0;
    for(int i=0;i<2;i++)
    {
        ans=0;
        for(int j=1;j<6;j++)
            if(grid[j][i]==grid[j-1][i]&&grid[j][i]=='X')
                ans++;
        if(ans==5)
            return true;
    }
    return false;
}
int main(int argc, char ** argv)
{
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int total=0,sum=0;
        bool twosix=false,sixtwo=false,TF=false,FT=false;
        cin>>s;
        for(int j=0;j<12;j++)
            if(s[j]=='X')
                sum++;
        twosix=checkTS();
        sixtwo=checkST();
        TF=checkTF();
        if(TF)total++;
        FT=checkFT();
        if(FT)total++;
        if(sum!=0)total++;
        if(sum==12)total++;
        if(sixtwo)total++;
        if(twosix)total++;
        printf("%d ",total);
        if(total!=0)
            printf("1x12 ");
        if(twosix)
            printf("2x6 ");
        if(TF)
            printf("3x4 ");
        if(FT)
            printf("4x3 ");
        if(sixtwo)
            printf("6x2 ");
        if(total==6)
            printf("12x1 ");
        printf("\n");
    }
	return 0;
}
