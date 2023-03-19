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
const int N=1e1+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
vector<vector<int>>graph;
void visualize(int n){
    for(int edge=0;edge<n;edge++){
        cout<<edge<<": ";
        for(auto x:graph[edge])
            cout<<x<<" ";
        cout<<endl;
    }
}
int n,m,ans;
char grid[N][N];
bool valid(int x, int y){
    return x>=0&&x<n&&y>=0&&y<m;
}
int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>grid[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(grid[i][j]=='W')
                if(valid(i-1,j)&&grid[i-1][j]=='P')
                    grid[i-1][j]='.',ans++;
                else if(valid(i,j-1)&&grid[i][j-1]=='P')
                    grid[i][j-1]='.',ans++;
                else if(valid(i,j+1)&&grid[i][j+1]=='P')
                    grid[i][j+1]='.',ans++;
                else if(valid(i+1,j)&&grid[i+1][j]=='P')
                    grid[i+1][j]='.',ans++;
    cout<<ans<<'\n';
    return 0;
}