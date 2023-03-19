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
const int N=1e5+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;

int main() {
    FAST;
    int n,arr[12][12]={0};
    cin>>n;
    for(int i=1;i<=n;i++)
        arr[i][1]=1;
    for(int i=2;i<=n;i++)
        for(int j=1;j<=n;j++)
            arr[i][j]=arr[i-1][j]+arr[i][j-1];
    if(n!=1)
        cout<<arr[n][n]*2;
    else cout<<1;
    return 0;
}