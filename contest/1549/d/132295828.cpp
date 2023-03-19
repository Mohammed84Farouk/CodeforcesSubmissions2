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
vector<ll>arr,diff;
vector<vector<ll>>table;
int n;
int Log(int x){
    return 31-__builtin_clz(x);
}
void buildTable(){
    table=vector<vector<ll>>(n,vector<ll>(Log(n)+1));
    for(int i=0;i<n;i++) table[i][0]=diff[i];
    for(int j=1;j<=Log(n);j++)
        for (int i = 0; i <= n - (1 << j); i++)
            table[i][j] = __gcd(table[i][j - 1], table[i + (1 << (j - 1))][j - 1]);
}
ll query(int l, int r){
    int j=Log(r-l+1);
    return __gcd(table[l][j],table[r-(1<<j)+1][j]);
}
int main() {
    FIO
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t;cin>>t;
    while(t--){
        cin>>n;
        arr=vector<ll>(n);
        diff=vector<ll>(n-1);
        for(int i=0;i<n;i++) cin>>arr[i];
        if(n==1){
            cout<<1<<'\n';
            continue;
        }
        n--;
        for(int i=0;i<n;i++)
            diff[i]=abs(arr[i+1]-arr[i]);
        int ans=1;
        buildTable();
        for(int l=0,r=0;r<n;r++){
            for(;l<=r&& query(l,r)==1;)
                l++;
            ans=max(ans,r-l+2);
        }
        cout<<ans<<endl;
    }
    return 0;
}
 
