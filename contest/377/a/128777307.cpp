/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)5e2+7, mod=1e9+7;
char grid[N][N];
bool marked[N][N];
int x,y,n,m,k,nNew,e,dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
bool valid(int xx,int yy)
{
    return (xx>=0 and xx<n and yy>=0 and yy<m and grid[xx][yy]=='.')? true:false;
}
void dfs(int x,int y)
{
    if(!nNew)
        return;
    nNew--;
    marked[x][y]=true;
    for(int i=0;i<4;i++)
        if (valid(x + dx[i],y + dy[i]) && !marked[x + dx[i]][y + dy[i]])
            dfs(x + dx[i],y + dy[i]);
}
int main() {
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == '.')
                e++, x = i, y = j;
        }
    nNew = e - k;
    dfs(x, y);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '#')
                cout << grid[i][j];
            else if (marked[i][j])
                cout << '.';
            else cout << 'X';
        }
    cout << endl;
    }
    return 0;
}
/*
 *
*/
