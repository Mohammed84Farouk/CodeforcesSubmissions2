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
const int N=15e1+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
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
    int flagLastWeed=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'W')
                flagLastWeed = i;
        }
    vector<int>r(n,0);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(grid[i][j]=='W'||grid[i+1][j]=='W')
                r[i]=max(j+1, r[i]);
    vector<int>l(n,m+1);
    l[0]=0;
    for(int i=1;i<n;i++)
        for(int j=0;j<m;j++)
            if(grid[i][j]=='W'||grid[i+1][j]=='W')
                l[i]=min(j+1, l[i]);
//    for(auto x:r){
//        cout<<x<<endl;
//    }
//    cout<<endl;
//    for(auto x:l)
//        cout<<x<<endl;
    int cur=1;
    for(int i=0;i<=flagLastWeed;i++,ans++)
        if(i%2==0&&r[i]!=0){     //facing right
            ans+=abs(r[i]-cur);
            cur=r[i];
        }
        else if(i&1&&l[i]!=m+1){
            ans+=abs(l[i]-cur);
            cur=l[i];
        }
    cout<<ans-1<<'\n';
    return 0;
}