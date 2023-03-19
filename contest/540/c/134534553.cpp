/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     //works for integers
using namespace std;
typedef unsigned long long ll;
const int N=5e2+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
int n,m,xx,yy,x2,y2;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
char arr[N][N];
bool flag;
bool valid(int x, int y){
    return (x>=1&&x<=n&&y>=1&&y<=m);
}
bool dfs(int x, int y){
//    cout<<"("<<x<<", "<<y<<")\n";
    for(int i=0;i<4;i++) {
        int tx = x + dx[i], ty = y + dy[i];
        if (valid(tx, ty) && tx == x2 && ty == y2 && arr[tx][ty] == 'X')
            flag= true;
        if (valid(tx, ty) && arr[tx][ty] == '.') {
            arr[tx][ty] = 'X';
            dfs(tx, ty);
        }
    }
    return flag;
}
int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>arr[i][j];
    cin>>xx>>yy>>x2>>y2;
//    dfs(xx,yy);
    if(dfs(xx,yy))cout<<"YES";
    else cout<<"NO";
    return 0;
}
