//https://vjudge.net/problem/UVA-10075
// IN THE NAME OF ALLAH, NOW SOLVING DP PROBLEMS.
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
const int N=3e1+5, M=1e1+5, mod=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
//void Print(int n)
//{
//    int N=n;
//    vector<int>arr;
//    while(n){
//        arr.push_back(n%2);
//        n/=2;
//    }
//    reverse(arr.begin(),arr.end());
//    for(auto x:arr)
//        cout<<x;
//    cout<<endl;
//}
int main() {
    FIO
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int n,ans=0;cin>>n;
    while(n){
//        Print(n);
        if(n&1) ans++;
//        cout<<numOf1sBin(n)<<endl;
        n>>=1;
    }
    cout<<ans<<endl;
    return 0;
}