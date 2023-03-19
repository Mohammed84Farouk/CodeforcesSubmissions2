//1593A - Elections Ready to submit
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
int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<((a==max(b,c)? 1:((a>max(b,c))? 0:max(b,c)-a+1)))<<" ";
        cout<<((b==max(a,c)? 1:((b>max(a,c))? 0:max(a,c)-b+1)))<<" ";
        cout<<((c==max(b,a)? 1:((c>max(b,a))? 0:max(b,a)-c+1)))<<'\n';
    }
    return 0;
}
