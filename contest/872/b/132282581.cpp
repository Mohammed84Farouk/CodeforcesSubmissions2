/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     //works for integers
using namespace std;
typedef long long ll;
const int N=2e5+5, M=1e1+5, mod=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
vector<int>arr;
vector<vector<int>>table;
//[element interests you so far][power limit(used for computing the range)]
int n;
int Log(int x){
    return 31-__builtin_clz(x);
}
void buildTable(){
    for(int i=0;i<n;i++) table[i][0]=arr[i];
    for(int j=1;j<=Log(n);j++)          //OR (1<<j)<=n
        for(int i=0;i<=n-(1<<j);i++)    //n=5 stop at 4 -> n-2^(j=1)+1 //1 based
            table[i][j]=min(table[i][j-1],table[i+(1<<(j-1))][j-1]);    //you should rewrite it again and focus on second table[][];
}
int query(int l, int r){
    int sz=Log(r-l+1);      //treated as j above as j is for powers
    return min(table[l][sz],table[r-(1<<sz)+1][sz]);
}
int main() {
    FIO
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int k,mx=INT_MIN,mn=INT_MAX;
    cin>>n>>k;
    arr=vector<int>(n);
    for(int &i:arr){
        cin>>i;
        mx=max(mx,i);
        mn=min(mn,i);
    }
    if(k==1) cout<<mn;
    else if(k==2){
        table = vector<vector<int>>(n, vector<int>(Log(n) + 1));
        buildTable();
        mx=INT_MIN;
        for(int i=0;i<=n-k;i++)
            mx=max({mx,query(0, i),query(i+1,n-1)});    //either start from beginning to end, or vice verse.
        cout<<mx;
    }
    else cout<<mx;  //any other value of k we can take the maximum in a subsegment alone and itself would be
                    //the minimum, then it would be the greatest of other minimums from other subsegments.

    return 0;
}