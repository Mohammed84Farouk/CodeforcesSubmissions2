#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
typedef long long ll;
char grid[20][20];
int main(int argc, char ** argv)
{
    for(int i=4;i<14;i++)
        for(int j=4;j<14;j++)
            cin>>grid[i][j];
    for(int i=4;i<14;i++)
        for(int j=4;j<14;j++)
            if(grid[i][j]=='.'&&grid[i-1][j+1]=='X'&&grid[i-2][j+2]=='X'&&grid[i-3][j+3]=='X'&&grid[i-4][j+4]=='X'||grid[i][j]=='.'&&grid[i-1][j+1]=='X'&&grid[i-2][j+2]=='X'&&grid[i-3][j+3]=='X'&&grid[i+1][j-1]=='X'||grid[i][j]=='.'&&grid[i-1][j+1]=='X'&&grid[i-2][j+2]=='X'&&grid[i+2][j-2]=='X'&&grid[i+1][j-1]=='X'||grid[i][j]=='.'&&grid[i-1][j+1]=='X'&&grid[i+3][j-3]=='X'&&grid[i+2][j-2]=='X'&&grid[i+1][j-1]=='X'||grid[i][j]=='.'&&grid[i+1][j+1]=='X'&&grid[i+2][j+2]=='X'&&grid[i+3][j+3]=='X'&&grid[i+4][j+4]=='X'||grid[i][j]=='.'&&grid[i+1][j+1]=='X'&&grid[i+2][j+2]=='X'&&grid[i+3][j+3]=='X'&&grid[i-1][j-1]=='X'||grid[i][j]=='.'&&grid[i+1][j+1]=='X'&&grid[i+2][j+2]=='X'&&grid[i-2][j-2]=='X'&&grid[i-1][j-1]=='X'||grid[i][j]=='.'&&grid[i+1][j+1]=='X'&&grid[i-3][j-3]=='X'&&grid[i-2][j-2]=='X'&&grid[i-1][j-1]=='X'||grid[i][j]=='.'&&grid[i+1][j-1]=='X'&&grid[i+2][j-2]=='X'&&grid[i+3][j-3]=='X'&&grid[i+4][j-4]=='X'||grid[i][j]=='.'&&grid[i-1][j-1]=='X'&&grid[i-2][j-2]=='X'&&grid[i-3][j-3]=='X'&&grid[i-4][j-4]=='X'||grid[i][j]=='.'&&grid[i+1][j]=='X'&&grid[i+2][j]=='X'&&grid[i+3][j]=='X'&&grid[i+4][j]=='X'||grid[i][j]=='.'&&grid[i-1][j]=='X'&&grid[i-2][j]=='X'&&grid[i-3][j]=='X'&&grid[i-4][j]=='X'||grid[i][j]=='.'&&grid[i][j-1]=='X'&&grid[i][j-2]=='X'&&grid[i][j-3]=='X'&&grid[i][j-4]=='X'||grid[i][j]=='.'&&grid[i][j+1]=='X'&&grid[i][j+2]=='X'&&grid[i][j+3]=='X'&&grid[i][j+4]=='X'||grid[i][j]=='.'&&grid[i][j+1]=='X'&&grid[i][j+2]=='X'&&grid[i][j+3]=='X'&&grid[i][j-1]=='X'||grid[i][j]=='.'&&grid[i][j+1]=='X'&&grid[i][j+2]=='X'&&grid[i][j-2]=='X'&&grid[i][j-1]=='X'||grid[i][j]=='.'&&grid[i][j+1]=='X'&&grid[i][j-3]=='X'&&grid[i][j-2]=='X'&&grid[i][j-1]=='X'||grid[i][j]=='.'&&grid[i-1][j]=='X'&&grid[i-2][j]=='X'&&grid[i-3][j]=='X'&&grid[i+1][j]=='X'||grid[i][j]=='.'&&grid[i-1][j]=='X'&&grid[i-2][j]=='X'&&grid[i+2][j]=='X'&&grid[i+1][j]=='X'||grid[i][j]=='.'&&grid[i-1][j]=='X'&&grid[i+1][j]=='X'&&grid[i+2][j]=='X'&&grid[i+1][j]=='X')
                {cout<<"YES"<<'\n';return 0;}
    cout<<"NO"<<'\n';
	return 0;
}
