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
const int N=2e5+5, M=1e1+5, mod=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;

int main() {
    FIO
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    vector<int>ans;
    for(int i=1;i<=2000;i++)
        if(!(i%3==0 || i%10 == 3))
            ans.push_back(i);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        cout<<ans[n-1]<<endl;
    }
    return 0;
}
