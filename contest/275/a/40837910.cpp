#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
typedef long long ll;
int input[4][4],grid[7][7],grid2[7][7];
int main(int argc, char ** argv)
{
    for(int i=1;i<4;i++)
        for(int j=1;j<4;j++)
        {
            scanf("%d",&input[i][j]);
            grid[i][j]=input[i][j]%2;
            grid2[i][j]=input[i][j]%2;
        }
    for(int i=1;i<4;i++)
        for(int j=1;j<4;j++)
            if(grid2[i][j]==1)
            {
                grid[i-1][j]++;grid[i][j-1]++;grid[i][j+1]++;grid[i+1][j]++;
            }
    for(int i=1;i<4;i++)
    {
        for(int j=1;j<4;j++)
            if(grid[i][j]%2==1)
                printf("0");
            else
                printf("1");
        printf("\n");
    }
    return 0;
}
