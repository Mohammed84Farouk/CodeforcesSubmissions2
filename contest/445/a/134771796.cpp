/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     //works for integers
using namespace std;
typedef long long ll;
const int N=1e2+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
char grid[N][N],c[N][N];
bool vis[N][N];
int n,m;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
bool valid(int x, int y){
    return x>=0&&x<n&&y>=0&&y<m;
}
void dfs(int x, int y, char cc='B'){
//    cout<<"("<<x<<", "<<y<<") char is "<<cc<<endl;
    if(vis[x][y]) return;
    vis[x][y]=true;
    grid[x][y]=cc;
    for(int i=0;i<4;i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (valid(nx, ny) && !vis[nx][ny] && c[nx][ny]!='-') {
            if (grid[x][y] == 'B')
                dfs(nx, ny, 'W');
            else if (grid[x][y] == 'W') dfs(nx, ny, 'B');
        }
    }
}
int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> c[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (c[i][j] == '.')
                dfs(i, j);
            else grid[i][j] = c[i][j];        //  '-'
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << grid[i][j];
        cout << '\n';
    }
    return 0;
}
