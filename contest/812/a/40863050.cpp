#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
typedef long long ll;
int grid[5][5];
int main(int argc, char ** argv)
{
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            scanf("%d",&grid[i][j]);
    if(grid[1][0]&&grid[0][3]||grid[0][1]&&grid[0][3]||grid[2][1]&&grid[0][3]||grid[3][2]&&grid[0][3]||grid[0][2]&&grid[0][3]||grid[0][0]&&grid[0][3]||/**/grid[2][0]&&grid[1][3]||grid[1][1]&&grid[1][3]||grid[3][1]&&grid[1][3]||grid[0][2]&&grid[1][3]||grid[1][2]&&grid[1][3]||grid[1][0]&&grid[1][3]||/**/grid[3][0]&&grid[2][3]||grid[0][1]&&grid[2][3]||grid[2][1]&&grid[2][3]||grid[1][2]&&grid[2][3]||grid[2][2]&&grid[2][3]||grid[2][0]&&grid[2][3]||/**/grid[0][0]&&grid[3][3]||grid[1][1]&&grid[3][3]||grid[3][1]&&grid[3][3]||grid[2][2]&&grid[3][3]||grid[3][2]&&grid[3][3]||grid[3][0]&&grid[3][3])
        printf("YES");
    else
        printf("NO");
    return 0;
}
